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
	
		Point() : x(0),y(0){cout<<"******Point�޲������캯��������"<<endl;}

		Point(int x1, int y1) : x(x1), y(y1){cout<<"******Point�в������캯��������"<<endl;}
		
		~Point(){cout<<"******Point��������������\n"<<endl;}

};

class Rect
{
	public :
	Rect(Point p11, Point p22) : p1(p11), p2(p22){cout<<"******Rect���캯��������"<<endl;}
	int getArea(Rect);
	~Rect(){cout<<"******Point��������������"<<endl;}

	private :
		Point p1;
		Point p2;
		
};
