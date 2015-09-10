#include"3.h"
/**
 *通过友元函数计算重量之和 
 */
int main()
{
	double sum;
	Boat boat;
	Car car;
	cout<<"请分别输入Boat和Car的重量：";
	sum = TotalWeight(boat, car);
	cout<<"总重量是："<<sum<<endl;
	return 0;
}

