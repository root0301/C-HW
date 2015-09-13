#include<iostream>
#include<fstream>
#include<iomanip>
/**
 *	往文件中添加行数 
 */
using namespace std;
int main()
{
	char name[10];													//打开的文件名 
	char content[100];												//文件中的内容 
	
	ofstream outPut;
	ifstream read;
	
	cout<<"请输入文件名：";
	cin>>name;
	
	read.open(name);
	outPut.open("anotherFile.txt");
	
	int index = 1;
	while(read.getline(content,100))								//一次读取一行 
	{
		outPut<<index<<" : " << content<<endl;
		index ++ ;
	}
	read.close();
	outPut.close();
}
 
