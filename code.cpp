#include<iostream.h>
using name space;
void swap(int ,int );
void main()
{
	int a,b,c;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	int sum=a+b;
	cout<<"sum"<<sum<<endl;
	swap(&a,&b);
	
}
void swap()
{
	int t;
	t=a;
	a=b;
	b=t;
	
}