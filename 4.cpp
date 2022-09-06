#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter the number";
	cin>>a;
	cout<<"enter the number";
	cin>>b;
	cout<<"enter the number";
	cin>>c;
	cout<<"enter the number";
	cin>>d;
	if(a>b && a>c && a>d)
	{
		cout<<a<<"is greater";
	}
	else if(b>a && b>c && b>d)
	{
		cout<<b<<"is greater";
	}
	else if(c>b && c>a && c>d)
	{
		cout<<c<<"is greater";
	}
	else
	{
		cout<<d<<"is greater";
	}
}
