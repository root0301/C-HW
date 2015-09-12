#include<iostream>
#include<stdio.h>
using namespace std;

class martrix
{
	private :
		int lines, rows;

	public :
		int **mar;
		martrix(int l, int r) :lines(l), rows(r)
		{
			mar = new int*[lines];
			for(int i=0; i<lines; i++)
			{
				mar[i] = new int[rows];
			}
		}
		
		martrix()
		{
			int l, r;
			cout<<"请输入矩阵的行数和列数：";
			cin>>l>>r;
			mar = new int*[l];
			for(int i=0; i<l; i++)
			mar[i] = new int[r];
			
			lines = l;
			rows = r;
		}
		
		martrix(martrix& M)
		{
			mar = new int*[M.lines];
			for(int i=0; i<M.lines; i++)
			{
				mar[i] = new int[M.rows];
			}
			lines = M.lines;
			rows = M.rows;
		}
		
		martrix& operator=(const martrix& m)
		{
			if(this != &m)	
			{
				for(int i=0; i<lines; i++)
				{
					delete [] mar[i];
				}
				delete [] mar;
				
				lines = m.lines;
				rows = m.rows;
				mar = new int*[lines];
				for(int i=0; i<m.lines; i++)
				{
					mar[i] = new int[rows];
				}
			}
		} 		

		 
		
		void init() 
			{
				int i , j;
				cout<<"请输入矩阵元素："<<endl;
				for(i=0; i<lines; i++)
				{
					for(j=0; j<rows; j++)
					{
						cin>>mar[i][j];
					}
				}
			}

		void print()
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

		void add(martrix& rec1, martrix& rec2)
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

		void sub(martrix& rec1, martrix& rec2)
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

		~martrix()
		{
			cout<<""<<endl;
			cout<<"调用析构函数"<<endl;
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
	
	cout<<"初始化A1"<<endl;
	A1.init();
	cout<<"初始化A2"<<endl;
	A2.init();
	
	A3.add(A1, A2);
	cout<<"A1和A2的和是："<<endl;
	A3.print();
	
	A3.sub(A1, A2);
	cout<<"A1和A2的差是："<<endl;
	A3.print();
	
	return 0; 
} 

