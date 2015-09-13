#include<iostream>
#include<stdio.h>
using namespace std;
/**
 *	Point����ʵ��++��--����������� 
 */
class Point
{
	//˽������X��Y���� 
	private :
		int X;
		int Y;
	public :
		
		int getX()														//�õ����X���� 
		{
			return X;
		}
		
		int getY()														//�õ����Y���� 
		{
			return Y;	
		} 
		
		Point(int x, int y)	: X(x), Y(y){}								//�в������캯�� 
		Point(Point& p)													//�������캯�� 
		{
			X = p.X;
			Y = p.Y;
		}
		
		friend Point operator++(Point& p)								//��Ԫ����ǰ��++���� 
		{
			p.X ++;
			p.Y ++; 
			return p; 
		}
		friend Point operator++(Point& p, int)							//��Ԫ��������++���� 
		{
			Point point = p;
			++p;
			return p;
		}

		friend Point operator--(Point& p)								//��Ԫ����ǰ��--���� 
		{
			p.X --;
			p.Y --;
			return p; 
		}
		friend Point operator--(Point& p, int)							//��Ԫ��������--���� 
		{
			Point point = p;
			--p;
			return p;
		}
		~Point()
		{
			cout<<"�������������á�"<<endl;
		}
};

int main()
{
	int x, y;
	cout<<"�������ĺ�����������꣺";
	cin>>x>>y;
	Point point(x, y);													//�����в������캯�� 
	Point temp = point;													//���ÿ������캯�� 
	
	cout<<"�õ����ǰ��++�Ľ���ǣ�";
	temp = ++point;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	cout<<"�õ���к���++�Ľ���ǣ�";
	temp = point++;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	cout<<"�õ����ǰ��--�Ľ���ǣ�";
	temp = --point;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	cout<<"�õ���к���--�Ľ���ǣ�";
	temp = point--;
	cout<<temp.getX()<<", "<<temp.getY()<<endl;
	
	return 0; 
}
