#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
using namespace std;
/**
 *	������Ʒ�۸� 
 */
int main() 
{
	srand(time(NULL));
	int price, guest_price = 0;
	price = rand()%1000 + 1;
	cout<<"������۸�:";
	while( guest_price != price) 
	{
		cin>>guest_price;
		if(guest_price < price)
		{
			cout<<"�Բ�������۸�ƫ�ͣ����������롣"<<endl;
		} else if( guest_price > price) {
			cout<<"�Բ�������۸�ƫ�ߣ����������롣"<<endl;
		}
	}
	cout<<"��������"<<endl;
	
	return 0; 
} 
