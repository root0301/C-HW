#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	char name[10];
	char content[100];
	
	ofstream outPut;
	ifstream read;
	
	cout<<"请输入文件名：";
	cin>>name;
	
	read.open(name);
	outPut.open("anotherFile.txt");
	
	int index = 1;
	while(read.getline(content,100))
	{
		outPut<<index<<" : " << content<<endl;
		index ++ ;
	}
	read.close();
	outPut.close();
}
 
