#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
/**
 *	���ļ������벻ͬ���������� 
 */
int main()
{
	ofstream outPut;
	outPut.open("test.txt");
	int a = 24;
	unsigned int b = 100;
	long c = 100000000;
	float d = 3.1415;
	double e = 3.1415926535897;
	char f[10] = "abcdefg";
	outPut<<"������"<<setw(23)<<a<<endl;
	outPut<<"�޷�����������"<<setw(15)<<b<<endl;
	outPut<<"������"<<setw(23)<<c<<endl;
	outPut<<"�����ȸ����ͣ�"<<setw(15)<<d<<endl;
	outPut<<"˫���ȸ����ͣ�"<<setprecision(15)<<e<<endl;
	outPut<<"�ַ�����"<<setw(21)<<f<<endl;
	outPut<<"***************"<<endl;
	outPut<<"��ʮ�������������"<<setw(11)<<a<<endl;
	outPut<<"��ʮ���������������"<<hex<<setw(9)<<a<<endl;
	outPut<<"�԰˽������������"<<oct<<setw(11)<<a<<endl;
	
	outPut.close();
	
	return 0;
}
