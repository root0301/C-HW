#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
/**
 *	������һ���绰���� 
 */
class Contacts
{
	private :
		int INDEX;														//˽�����ԣ���������ϵ�˸��� 
		string NAME[100];												//��ϵ�������ļ��� 
		string NUMBER[100];												//��ϵ�˵绰�ļ��� 
	public :
		Contacts()														//���췽�� 
		{
			int index = 0;
			string name, number;
			ifstream read;
			read.open("phoneBook.txt");
			 while(!read.eof())											//���ļ��н���ϵ��ѭ����ȡ���ڴ��� 
			 {
			 	read>>name>>number;
			 	NAME[index] = name;
			 	NUMBER[index] = number; 
			 	index ++ ;
			 	//��ֹ���һ�е��ظ���ȡ 
			 	read.get();
			 	if( read.peek() == '\n')break; 
			 }
			 INDEX = index;
		}
		
		void serach()													//������ϵ�� 
		{
			int index = 0, flag = 0;
			string name;
			cout<<"��������Ҫ������������";
			cin>>name;
			//if����ѭ������Ľ� 
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
				cout<<"���ҵ�"<<name<<endl;
				cout<<"�����ǣ�"<<NUMBER[index]<<endl;	 
			}
			else {
				cout<<"�޼�¼."<<endl;
			}
		}
		
		void add()														//�����ϵ�� 
		{
			string name, number;
			cout<<"������Ҫ��ӵ���ϵ�˵�����:";
			cin>>name;
			
			for(int i=0; i <= INDEX; i++ )
			{
				if(NAME[i] == name)
				{
					cout<<"�Ѵ��ڸ���ϵ��."<<endl;
					return;	
				}	
			} 
			
			cout<<"���������:";
			cin>>number;
			INDEX++;
			NAME[INDEX] = name;
			NUMBER[INDEX] = number;
			cout<<"��ӳɹ�."<<endl;
			storeIntoFile();
		}
		
		void del()														//ɾ����ϵ�� 
		{
			int index = 0, flag = 0;
			string name;
			ifstream read;
			read.open("phoneBook.txt");
			cout<<"������Ҫɾ������ϵ�˵�����:";
			cin>>name;
			//if����ѭ������Ľ�
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
				cout<<"ɾ���ɹ�."<<endl;
				INDEX--;
				storeIntoFile();
			}else {
				cout<<"�޴���ϵ��.";
			}
		}
		
		void storeIntoFile()												//����ϵ�˴洢���ļ��� 
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
		
		void PrintAllContacts()												//��ʾ���е���ϵ�� 
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

void interface()															//�����н���������� 
{
	system("Color 4B");
	cout<<"******************************����ѡ��******************************"<<endl;
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
		if(j==4)cout<<"*		          1.������ϵ��		                   *"<<endl; 
		if(j==5)cout<<"*		          2.�����ϵ��		                   *"<<endl;
		if(j==6)cout<<"*		          3.ɾ����ϵ��		                   *"<<endl;
		if(j==7)cout<<"*		          4.�鿴��ϵ��		                   *"<<endl;
	}
	cout<<""<<endl;
	
}



