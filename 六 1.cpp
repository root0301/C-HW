#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
/**
 *	往文件中输入不同的数据类型 
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
	outPut<<"整数："<<setw(23)<<a<<endl;
	outPut<<"无符号型整数："<<setw(15)<<b<<endl;
	outPut<<"长整型"<<setw(23)<<c<<endl;
	outPut<<"单精度浮点型："<<setw(15)<<d<<endl;
	outPut<<"双精度浮点型："<<setprecision(15)<<e<<endl;
	outPut<<"字符串："<<setw(21)<<f<<endl;
	outPut<<"***************"<<endl;
	outPut<<"以十进制输出整数："<<setw(11)<<a<<endl;
	outPut<<"以十六进制输出整数："<<hex<<setw(9)<<a<<endl;
	outPut<<"以八进制输出整数："<<oct<<setw(11)<<a<<endl;
	
	outPut.close();
	
	return 0;
}
