#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Point 
{
	public :
		int x ;
		int y ;
		int getDistance(Point, Point);
		
	    /**
         *无参数和有参数的构造函数
		 *无参数的构造函数将坐标点设置为（0，0）	
 	     */
		Point() : x(0),y(0){cout<<"******Point无参数构造函数被调用"<<endl;}

		Point(int x1, int y1) : x(x1), y(y1){cout<<"******Point有参数构造函数被调用"<<endl;}
		
		~Point(){cout<<"******Point析构函数被调用\n"<<endl;}

};

class Rect
{
	public :
	/**
     *以Point类对象为参数的构造函数	
 	 */
	Rect(Point p11, Point p22) : p1(p11), p2(p22){cout<<"******Rect构造函数被调用"<<endl;}
	int getArea(Rect);
	~Rect(){cout<<"******Point析构函数被调用"<<endl;}

	private :
		Point p1;
		Point p2;
		
};
