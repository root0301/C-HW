#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	��ʼ������ 
 */
void init(int **rec) 
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
void print(int **rec)
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
void add(int **rec1, int **rec2, int **result)
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
void sub(int **rec1, int **rec2, int **result)
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
	int **A1, **A2, **A3;                                
	int i;
	//���⵽�����붯̬�ڴ�ռ� 
	A1 = new int*[4];
	A2 = new int*[4];
	A3 = new int*[4];
	for(i=0; i<4; i++)
	{
		A1[i] = new int[5];
		A2[i] = new int[5];
		A3[i] = new int[5];
	}
	//�����ڴ���� 
	
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
	
	//���ڵ����ͷ��ڴ�ռ�	
	for(i=0; i<5; i++)
	{
		delete [] A1[i];
		delete [] A2[i];
		delete [] A3[i];
	}
	delete [] A1;
	delete [] A2;
	delete [] A3;
	//�ͷŽ���	
	return 0;
	
		
} 



