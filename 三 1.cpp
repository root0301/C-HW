#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	��ʼ������ 
 */
void init(int rec[4][5]) 
{
	int i , j;
	cout<<"�������һ��4X5����"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cin>>rec[i][j];
		}
	}
}
/**
 *	��ӡ���� 
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
 *	������� 
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
 *	������� 
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
	int A1[4][5], A2[4][5], A3[4][5];						//��̬��������ռ� 
	cout<<"������A1����(4X5)��"<<endl;
	init(A1);
	cout<<"������A2����(4X5)��"<<endl;
	init(A2);
	
	cout<<"���������������ֱ��ǣ�"<<endl;
	print(A1);
	cout<<""<<endl;
	print(A2);
	cout<<""<<endl;
	
	cout<<"��������ӽ��Ϊ��"<<endl;
	add(A1, A2, A3);
	cout<<""<<endl;
	
	cout<<"������������Ϊ��"<<endl;
	sub(A1, A2, A3);
	cout<<""<<endl;
	
	
	
}



