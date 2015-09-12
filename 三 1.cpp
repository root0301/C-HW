#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	初始化矩阵 
 */
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
/**
 *	打印矩阵 
 */
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
/**
 *	矩阵相加 
 */
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
/**
 *	矩阵相减 
 */
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
	int A1[4][5], A2[4][5], A3[4][5];						//静态申请数组空间 
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



