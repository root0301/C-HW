#include"七 1.h"

int main()
{
	int choice;
	Contacts contact;
	interface();
	cin>>choice;
	while(choice != 0)													//循环接收用户输入，0时退出程序 
	{
		switch(choice)
		{
			case 1 :
				contact.serach();
				break;
			case 2 :
				contact.add();
				break;
			case 3 :
				contact.del();
				break;
			case 4 :
				contact.PrintAllContacts();
				break;
			default :
				cout<<"输入选项错误，请重新输入."<<endl;
		}		
		cin>>choice;
	}

} 
