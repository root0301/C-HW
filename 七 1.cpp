#include"�� 1.h"

int main()
{
	int choice;
	Contacts contact;
	interface();
	cin>>choice;
	while(choice != 0)													//ѭ�������û����룬0ʱ�˳����� 
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
				cout<<"����ѡ���������������."<<endl;
		}		
		cin>>choice;
	}

} 
