#include<iostream>
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
		
		Point& operator++()												//��Ա����ǰ��++���� 
		{
			X++;
			Y++; 
			return *this; 
		}
		Point operator++(int)											//��Ա��������++���� 
		{
			Point point = *this;
			this->X++;this->Y++;
			return point;
		}

		Point& operator--()												//��Ա����ǰ��--���� 
		{
			X--;
			Y--;
			return *this; 
		}
		Point operator--(int)											//��Ա��������--���� 
		{
			Point point = *this;
			this->X--;this->Y--;
			return point;
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
	
	cout<<"�õ����ǰ��++�Ľ���ǣ�";
	++point;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	cout<<"�õ���к���++�Ľ���ǣ�";
	point++;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	cout<<"�õ����ǰ��--�Ľ���ǣ�";
	--point;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	cout<<"�õ���к���--�Ľ���ǣ�";
	point--;
	cout<<point.getX()<<", "<<point.getY()<<endl;
	
	return 0; 
}
