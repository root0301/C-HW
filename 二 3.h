#include<iostream>
#include<stdio.h>
using namespace std;

class Car;
class Boat 
{
	public :
		friend double
		 TotalWeight(Boat& b, Car& c);
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
	 	 TotalWeight(Boat& b, Car& c);
	 	 Car(){}
	 	 ~Car(){}
};

double TotalWeight(Boat& b, Car& c)
{
	cin>>b.weight>>c.weight;
	double sum = b.weight + c.weight;
	return sum;
}
