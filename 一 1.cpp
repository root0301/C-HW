#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
using namespace std;
/**
 *	竞猜商品价格 
 */
int main() 
{
	srand(time(NULL));										//使用时间作为随机数种子 
	int price, guest_price = 0;
	price = rand()%1000 + 1;								//设置随机数的范围 
	cout<<"请输入价格:";
	while( guest_price != price) 
	{
		cin>>guest_price;									//用户输入价格 
		if(guest_price < price)
		{
			cout<<"对不起，输入价格偏低，请重新输入。"<<endl;
		} else if( guest_price > price) {
			cout<<"对不起，输入价格偏高，请重新输入。"<<endl;
		}
	}
	cout<<"您猜中了"<<endl;
	
	return 0; 
} 
