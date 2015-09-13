#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	Point类中实现++和--运算符的重载 
 */
class Point
{
	//私有属性X和Y坐标 
	private :
		int X;
		int Y;
	public :
		
		int getX()														//得到点的X坐标 
		{
			return X;
		}
		
		int getY()														//得到点的Y坐标 
		{
			return Y;	
		} 
		
		Point(int x, int y)	: X(x), Y(y){}								//有参数构造函数 
		Point(Point& p)													//拷贝构造函数 
		{
			X = p.X;
			Y = p.Y;
		}
		
		friend Point operator++(Point& p)								//友元函数前置++重载 
		{
			p.X ++;
			p.Y ++; 
			return p; 
		}
		friend Point operator++(Point& p, int)							//友元函数后置++重载 
		{
			Point point = p;
			++p;
			return p;
		}

		friend Point operator--(Point& p)								//友元函数前置--重载 
		{
			p.X --;
			p.Y --;
			return p; 
		}
		friend Point operator--(Point& p, int)							//友元函数后置--重载 
		{
			Point point = p;
			--p;
			return p;
		}
		~Point()
		{
			cout<<"析构函数被调用。"<<endl;
		}
};

int main()
{
	int x, y;
	cout<<"请输入点的横坐标和纵坐标：";
	cin>>x>>y;
	Point point(x, y);													//调用有参数构造函数 
	Point temp = point;													//调用拷贝构造函数 
	
	cout<<"该点进行前置++的结果是：";
	temp = ++point;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	cout<<"该点进行后置++的结果是：";
	temp = point++;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	cout<<"该点进行前置--的结果是：";
	temp = --point;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	cout<<"该点进行后置--的结果是：";
	temp = point--;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	return 0; 
}
