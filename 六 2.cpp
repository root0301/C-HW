#include<iostream>
#include<fstream>
#include<iomanip>
/**
 *	���ļ���������� 
 */
using namespace std;
int main()
{
	char name[10];													//�򿪵��ļ��� 
	char content[100];												//�ļ��е����� 
	
	ofstream outPut;
	ifstream read;
	
	cout<<"�������ļ�����";
	cin>>name;
	
	read.open(name);
	outPut.open("anotherFile.txt");
	
	int index = 1;
	while(read.getline(content,100))								//һ�ζ�ȡһ�� 
	{
		outPut<<index<<" : " << content<<endl;
		index ++ ;
	}
	read.close();
	outPut.close();
}
 
