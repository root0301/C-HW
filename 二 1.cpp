#include "�� 1.h"
/**
 *	ͨ��Point��Rect�����������ε���� 
 */
int main() 
{
	int x1, y1, x2, y2;
	cout<<"��������ε����ϽǺ����½����꣺";
	cin>>x1>>y1>>x2>>y2;
	
	Point p1(x1, y1);										//�����в������캯�� 
	Point p2(x2, y2);
	Rect rect(p1, p2);
	cout<<"------���ε�����ǣ�";
	cout<<rect.getArea(rect)<<endl;
	
	return 0;
} 

/**
 *	Point��ļ���������� 
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
 *	�����������ε���� 
 */
int Rect :: getArea(Rect r)
{
	int area, height, width;
	width = r.p2.x - r.p1.x;
	height = r.p1.y - r.p2.y;
	area = height * width;
	return area;
}
