#include<iostream>
#include<stdio.h>
using namespace std;

void init(int rec[4][5]) 
{
	int i , j;
	cout<<"请输入第一个4X5矩阵"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cin>>rec[i][j];
		}
	}
}

void print(int rec[4][5])
{
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<rec[i][j]<<" "; 
		}
		cout<<""<<endl;
	}
}

void add(int rec1[4][5], int rec2[4][5], int result[4][5])
{
	int i , j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			result[i][j] = rec1[i][j] + rec2[i][j];
		}
	}			
	print(result);
}

void sub(int rec1[4][5], int rec2[4][5], int result[4][5])
{
	int i , j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			result[i][j] = rec1[i][j] - rec2[i][j];
		}
	}			
	print(result);	
}

int main()
{
	int A1[4][5], A2[4][5], A3[4][5];
	cout<<"请输入A1矩阵(4X5)："<<endl;
	init(A1);
	cout<<"请输入A2矩阵(4X5)："<<endl;
	init(A2);
	
	cout<<"你输入的两个矩阵分别是："<<endl;
	print(A1);
	cout<<""<<endl;
	print(A2);
	cout<<""<<endl;
	
	cout<<"两矩阵相加结果为："<<endl;
	add(A1, A2, A3);
	cout<<""<<endl;
	
	cout<<"两矩阵相减结果为："<<endl;
	sub(A1, A2, A3);
	cout<<""<<endl;
	
	
	
}



