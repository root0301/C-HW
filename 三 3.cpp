#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	���������� 
 */
class martrix
{
	private :
		int lines, rows;

	public :
		int **mar;														//���������ָ�� 
		martrix(int l, int r) :lines(l), rows(r)						//�����в������캯�� 
		{
			/**
 			 *	Ϊ����ָ������ڴ�ռ� 
 			 */
			mar = new int*[lines];										
			for(int i=0; i<lines; i++)
			{
				mar[i] = new int[rows];
			}
		}
		
		martrix()														//�����޲������캯�� 
		{
			int l, r;
			cout<<"����������������������";
			cin>>l>>r;
			//Ϊ����ָ������ڴ�ռ� 
			mar = new int*[l];
			for(int i=0; i<l; i++)
			mar[i] = new int[r];
			
			lines = l;
			rows = r;
		}
		
		martrix(martrix& M)												//�������캯�� 
		{
			//Ϊ����ָ������ڴ�ռ� 
			mar = new int*[M.lines];
			for(int i=0; i<M.lines; i++)
			{
				mar[i] = new int[M.rows];
			}
			lines = M.lines;
			rows = M.rows;
		}
		
		martrix& operator=(const martrix& m)							//��ֵ�����=���� 
		{
			if(this != &m)												//�����Ը�ֵ 
			{
				//�ͷ�ԭ����ָ���ڴ�ռ� 
				for(int i=0; i<lines; i++)
				{
					delete [] mar[i];
				}
				delete [] mar;
				
				lines = m.lines;
				rows = m.rows;
				//Ϊ����ָ������ڴ� 
				mar = new int*[lines];
				for(int i=0; i<m.lines; i++)
				{
					mar[i] = new int[rows];
				}
			}
		} 		

		void init() 													//��ʼ������Ԫ��	
			{
				int i , j;
				cout<<"���������Ԫ�أ�"<<endl;
				for(i=0; i<lines; i++)
				{
					for(j=0; j<rows; j++)
					{
						cin>>mar[i][j];
					}
				}
			}

		void print()													//��ӡ���� 
		{
			int i, j;
			for(i=0; i<lines; i++)
			{
				for(j=0; j<rows; j++)
				{
					cout<<mar[i][j]<<" "; 
				}
				cout<<""<<endl;
			}
		}

		void add(martrix& rec1, martrix& rec2)							//������� 
		{
			int i , j;
			for(i=0; i<lines; i++)
			{
				for(j=0; j<rows; j++)
				{
					mar[i][j] = rec1.mar[i][j] + rec2.mar[i][j];
				}
			}			
			
		}

		void sub(martrix& rec1, martrix& rec2)							//������� 
		{	
			int i , j;
			for(i=0; i<lines; i++)
			{
				for(j=0; j<rows; j++)
				{
					mar[i][j] = rec1.mar[i][j] - rec2.mar[i][j];
				}
			}			
			
		}	

		~martrix()														//�������� 
		{
			cout<<""<<endl;
			cout<<"������������"<<endl;
			//�ͷ�����ָ���ڴ�ռ� 
			for(int i=0; i<lines; i++)
			{
				delete [] mar[i];
			}
			delete [] mar;
		}
			
};

int main()
{
	martrix A1;
	martrix A2 = A1;
	martrix A3 = A1;
	
	cout<<"��ʼ��A1"<<endl;
	A1.init();
	cout<<"��ʼ��A2"<<endl;
	A2.init();
	
	A3.add(A1, A2);
	cout<<"A1��A2�ĺ��ǣ�"<<endl;
	A3.print();
	
	A3.sub(A1, A2);
	cout<<"A1��A2�Ĳ��ǣ�"<<endl;
	A3.print();
	
	return 0; 
} 

