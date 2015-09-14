#include<iostream>
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
		
		Point& operator++()												//成员函数前置++重载 
		{
			X++;
			Y++; 
			return *this; 
		}
		Point operator++(int)											//成员函数后置++重载 
		{
			Point point = *this;
			this->X++;this->Y++;
			return point;
		}

		Point& operator--()												//成员函数前置--重载 
		{
			X--;
			Y--;
			return *this; 
		}
		Point operator--(int)											//成员函数后置--重载 
		{
			Point point = *this;
			this->X--;this->Y--;
			return point;
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
	
	cout<<"该点进行前置++的结果是：";
	++point;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	cout<<"该点进行后置++的结果是：";
	point++;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	cout<<"该点进行前置--的结果是：";
	--point;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	cout<<"该点进行后置--的结果是：";
	point--;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	return 0; 
}
