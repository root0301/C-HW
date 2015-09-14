#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
/**
 *	定义了一个电话本类 
 */
class Contacts
{
	private :
		int INDEX;														//私有属性，所含的联系人个数 
		string NAME[100];												//联系人姓名的集合 
		string NUMBER[100];												//联系人电话的集合 
	public :
		Contacts()														//构造方法 
		{
			int index = 0;
			string name, number;
			ifstream read;
			read.open("phoneBook.txt");
			 while(!read.eof())											//从文件中将联系人循环读取到内存中 
			 {
			 	read>>name>>number;
			 	NAME[index] = name;
			 	NUMBER[index] = number; 
			 	index ++ ;
			 	//防止最后一行的重复读取 
			 	read.get();
			 	if( read.peek() == '\n')break; 
			 }
			 INDEX = index;
		}
		
		void serach()													//查找联系人 
		{
			int index = 0, flag = 0;
			string name;
			cout<<"请输入你要搜索的姓名：";
			cin>>name;
			//if语句和循环体待改进 
			if(name == NAME[index])
			{
				flag = 1;
			}
			while(index <= INDEX && NAME[index] != name)
			{
				index ++ ;
				if(NAME[index] == name)
				{
					flag = 1;
				}
					
			}
			if(flag)
			{
				cout<<"已找到"<<name<<endl;
				cout<<"号码是："<<NUMBER[index]<<endl;	 
			}
			else {
				cout<<"无记录."<<endl;
			}
		}
		
		void add()														//添加联系人 
		{
			string name, number;
			cout<<"请输入要添加的联系人的姓名:";
			cin>>name;
			
			for(int i=0; i <= INDEX; i++ )
			{
				if(NAME[i] == name)
				{
					cout<<"已存在该联系人."<<endl;
					return;	
				}	
			} 
			
			cout<<"请输入号码:";
			cin>>number;
			INDEX++;
			NAME[INDEX] = name;
			NUMBER[INDEX] = number;
			cout<<"添加成功."<<endl;
			storeIntoFile();
		}
		
		void del()														//删除联系人 
		{
			int index = 0, flag = 0;
			string name;
			ifstream read;
			read.open("phoneBook.txt");
			cout<<"请输入要删除的联系人的姓名:";
			cin>>name;
			//if语句和循环体待改进
			if(NAME[index] == name)
			{
				NAME[index] = "";
				NUMBER[index] = "";
				flag = 1;				
			}
			while(index <= INDEX && NAME[index] != name)
			{
				index ++;
				if(NAME[index] == name)
				{
					NAME[index] = "";
					NUMBER[index] = "";
					flag = 1;
				}	
			} 
			if(flag)
			{
				cout<<"删除成功."<<endl;
				INDEX--;
				storeIntoFile();
			}else {
				cout<<"无此联系人.";
			}
		}
		
		void storeIntoFile()												//将联系人存储到文件中 
		{
			int index = 0;
			ofstream outPut;
			outPut.open("phoneBook.txt");
			while(index <= INDEX)
			{
				if(NAME[index] != "")
				outPut<<setw(10)<<NAME[index]<<setw(20)<<NUMBER[index]<<endl;	\
				index ++;
			}	
		}
		
		void PrintAllContacts()												//显示所有的联系人 
		{
			int index = 0;
			while(index <= INDEX)
			{
				if(NAME[index] != "")
				cout<<setw(10)<<NAME[index]<<setw(20)<<NUMBER[index]<<endl;
				index ++;		
			}	
		}
};

void interface()															//命令行交互界面设计 
{
	system("Color 4B");
	cout<<"******************************输入选择******************************"<<endl;
	int i=0,j=0;
	for(j=0;j<15;j++)
	{
		if(j!=14)
		{
			for(i=0;i<68;i++)
			{
			
				if(i==0)cout<<"*";
				else 
				if(i==67)cout<<"*"<<endl;
				else cout<<" ";
			}	
		}
		else
		cout<<"********************************************************************";
		if(j==4)cout<<"*		          1.查找联系人		                   *"<<endl; 
		if(j==5)cout<<"*		          2.添加联系人		                   *"<<endl;
		if(j==6)cout<<"*		          3.删除联系人		                   *"<<endl;
		if(j==7)cout<<"*		          4.查看联系人		                   *"<<endl;
	}
	cout<<""<<endl;
	
}



