#include "二 1.h"
/**
 *	通过Point和Rect两个类计算矩形的面积 
 */
int main() 
{
	int x1, y1, x2, y2;
	cout<<"请输入矩形的左上角和右下角坐标：";
	cin>>x1>>y1>>x2>>y2;
	
	Point p1(x1, y1);										//调用有参数构造函数 
	Point p2(x2, y2);
	Rect rect(p1, p2);
	cout<<"------矩形的面积是：";
	cout<<rect.getArea(rect)<<endl;
	
	return 0;
} 

/**
 *	Point类的计算两点距离 
 */
int Point :: getDistance(Point p1, Point p2)
{
	int dis, X, Y;
	X = (p2.x - p1.x) * (p2.x - p1.x);
	Y = (p2.y - p1.y) * (p2.y - p2.y);
	dis = sqrt(X + Y);
	return dis;	
}
/**
 *	矩形类计算矩形的面积 
 */
int Rect :: getArea(Rect r)
{
	int area, height, width;
	width = r.p2.x - r.p1.x;
	height = r.p1.y - r.p2.y;
	area = height * width;
	return area;
}
