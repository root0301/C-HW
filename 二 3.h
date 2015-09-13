#include<iostream>

using namespace std;

class Car;
class Boat 
{
	public :
		friend double
		 TotalWeight(Boat& b, Car& c);						//声明为本类的友元函数 
		 Boat(){}
		~Boat(){}
	private :
		float weight;	
};

class Car
{
	private :
		float weight;
		
	public :
		friend double
	 	 TotalWeight(Boat& b, Car& c);						//声明为本类的友元函数 
	 	 Car(){}
	 	 ~Car(){}
};
/**
 *	计算重量之和 
 */
double TotalWeight(Boat& b, Car& c)
{
	cin>>b.weight>>c.weight;
	double sum = b.weight + c.weight;
	return sum;
}
