#include<iostream>
using namespace std;
/**
 *	�̳�������,shpe����Ϊ���� 
 */
class shape
{
	public :
		virtual float area() = 0;											//������������������ɴ��麯�� 
		shape()
		{
			cout<<"shape�Ĺ��캯�������á�"<<endl;
		}	
		~shape()
		{
			cout<<"shape���������������á�"<<endl;
		}
}; 

class circle : public shape
{
	private :
		float radius;
		
	public :
		float area()
		{
			return 3.14 * radius * radius;
		}
		circle(int r) : radius(r)
		{
			cout<<"circle�Ĺ��캯�������á�"<<endl;
		}
		~circle()
		{
			cout<<"circle���������������á�"<<endl;
		}
};

class rectangle : public shape
{
	private :
		float height;
		float width;

	public :
		float area()
		{
			return height*width;
		}		
		rectangle(float h, float w) : height(h), width(w)
		{
			cout<<"rectangle�Ĺ��캯�������á�"<<endl;
		}
		~rectangle()
		{
			cout<<"rectangle���������������á�"<<endl;
		}
};

class square : public rectangle
{
	private :
		float length;
	
	public :
		float area()
		{
			return length * length;	
		}	
		square(float l) : rectangle(l, l) ,length(l)
		{
			cout<<"square�Ĺ��캯�������á�"<<endl;
		}
		~square()
		{
			cout<<"square���������������á�"<<endl;
		}
};

int main()
{
	
	float radius;
	cout<<"����Բ�������"<<endl;
	cout<<"������Բ�İ뾶��";
	cin>>radius;
	circle c(radius);
	cout<<"Բ������ǣ�"<<c.area()<<" ."<<endl;
	
	float h, l;
	cout<<"������ε������"<<endl;
	cout<<"��������εĳ��Ϳ�";
	cin>>h>>l;
	rectangle r(h, l);
	cout<<"���ε�����ǣ�"<<r.area()<<" ."<<endl;
	
	float length;
	cout<<"���������ε������"<<endl;
	cout<<"�����������εı߳���";
	cin>>length;
	square s(length);
	cout<<"�����ε�����ǣ�"<<s.area()<<" ."<<endl;
	
	return 0; 
	
}

