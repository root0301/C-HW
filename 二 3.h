#include<iostream>

using namespace std;

class Car;
class Boat 
{
	public :
		friend double
		 TotalWeight(Boat& b, Car& c);						//����Ϊ�������Ԫ���� 
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
	 	 TotalWeight(Boat& b, Car& c);						//����Ϊ�������Ԫ���� 
	 	 Car(){}
	 	 ~Car(){}
};
/**
 *	��������֮�� 
 */
double TotalWeight(Boat& b, Car& c)
{
	cin>>b.weight>>c.weight;
	double sum = b.weight + c.weight;
	return sum;
}
