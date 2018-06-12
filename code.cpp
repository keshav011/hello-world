#include<iostream.h>
using name space;
void swap(int ,int );
void main()
{
	int a,b;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	swap(&a,&b);
	
}
void swap()
{
	int t;
	t=a;
	a=b;
	b=t;
}