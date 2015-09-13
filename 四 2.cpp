#include<iostream>
using namespace std;
/**
 *	继承与派生,shpe基类为虚类 
 */
class shape
{
	public :
		virtual float area() = 0;											//将基类的面积函数定义成纯虚函数 
		shape()
		{
			cout<<"shape的构造函数被调用。"<<endl;
		}	
		~shape()
		{
			cout<<"shape的析构函数被调用。"<<endl;
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
			cout<<"circle的构造函数被调用。"<<endl;
		}
		~circle()
		{
			cout<<"circle的析构函数被调用。"<<endl;
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
			cout<<"rectangle的构造函数被调用。"<<endl;
		}
		~rectangle()
		{
			cout<<"rectangle的析构函数被调用。"<<endl;
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
			cout<<"square的构造函数被调用。"<<endl;
		}
		~square()
		{
			cout<<"square的析构函数被调用。"<<endl;
		}
};

int main()
{
	
	float radius;
	cout<<"计算圆的面积："<<endl;
	cout<<"请输入圆的半径：";
	cin>>radius;
	circle c(radius);
	cout<<"圆的面积是："<<c.area()<<" ."<<endl;
	
	float h, l;
	cout<<"计算矩形的面积："<<endl;
	cout<<"请输入矩形的长和宽：";
	cin>>h>>l;
	rectangle r(h, l);
	cout<<"矩形的面积是："<<r.area()<<" ."<<endl;
	
	float length;
	cout<<"计算正方形的面积："<<endl;
	cout<<"请输入正方形的边长：";
	cin>>length;
	square s(length);
	cout<<"正方形的面积是："<<s.area()<<" ."<<endl;
	
	return 0; 
	
}

