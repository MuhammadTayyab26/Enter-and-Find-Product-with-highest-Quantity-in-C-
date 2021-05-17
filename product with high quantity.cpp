#include<iostream>
#include<conio.h>
using namespace std;
struct product
{
	int pid;
	char pd[30];
	float pq;
};
int main()
{
	product *p=new product [10];
	int i;
	for(i=0;i<10;i++)
	{
		
		cout<<"enter product ID\t";
		cin>>(p+i)->pid;
		cout<<"enter product name\t";
		cin>>(p+i)->pd;
		cout<<"enter product quantity\t";
		cin>>(p+i)->pq;
		cout<<endl;
	}
	int max=0,loc=0;
	max=(p+0)->pq;
	for(i=0;i<10;i++)
	{
		if((p+i)->pq > max)
		{
		max=(p+i)->pq;
		loc=i;
	    }
	}
	cout<<"Products with highest Quantity having...\n"<<endl;
	
	cout<<"ID = "<<(p+loc)->pid<<endl;
	cout<<"Name = "<<(p+loc)->pd<<endl;
	cout<<"Quantity = "<<(p+loc)->pq<<endl;
	getch();
	return 0;
}
