#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	定义矩阵的类 
 */
class martrix
{
	private :
		int lines, rows;

	public :
		int **mar;														//储存数组的指针 
		martrix(int l, int r) :lines(l), rows(r)						//矩阵有参数构造函数 
		{
			/**
 			 *	为数组指针分配内存空间 
 			 */
			mar = new int*[lines];										
			for(int i=0; i<lines; i++)
			{
				mar[i] = new int[rows];
			}
		}
		
		martrix()														//矩阵无参数构造函数 
		{
			int l, r;
			cout<<"请输入矩阵的行数和列数：";
			cin>>l>>r;
			//为数组指针分配内存空间 
			mar = new int*[l];
			for(int i=0; i<l; i++)
			mar[i] = new int[r];
			
			lines = l;
			rows = r;
		}
		
		martrix(martrix& M)												//拷贝构造函数 
		{
			//为数组指针分配内存空间 
			mar = new int*[M.lines];
			for(int i=0; i<M.lines; i++)
			{
				mar[i] = new int[M.rows];
			}
			lines = M.lines;
			rows = M.rows;
		}
		
		martrix& operator=(const martrix& m)							//赋值运算符=重载 
		{
			if(this != &m)												//当心自赋值 
			{
				//释放原数组指针内存空间 
				for(int i=0; i<lines; i++)
				{
					delete [] mar[i];
				}
				delete [] mar;
				
				lines = m.lines;
				rows = m.rows;
				//为数组指针分配内存 
				mar = new int*[lines];
				for(int i=0; i<m.lines; i++)
				{
					mar[i] = new int[rows];
				}
			}
		} 		

		void init() 													//初始化数组元素	
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

		void print()													//打印数组 
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

		void add(martrix& rec1, martrix& rec2)							//数组相加 
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

		void sub(martrix& rec1, martrix& rec2)							//数组相减 
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

		~martrix()														//析构函数 
		{
			cout<<""<<endl;
			cout<<"调用析构函数"<<endl;
			//释放数组指针内存空间 
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

