#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	cout<<"enter the number";
	cin>>a;
	cout<<"enter the number";
	cin>>b;
	swap(a,b);
	{
		cout<<"before swapping"<<endl;
		cout<<"value of a"<<a<<endl;
		cout<<"value of b"<<b<<endl;
	}
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping"<<endl;
	cout<<"value of a"<<a<<endl;
	cout<<"value of b"<<b<<endl;
}
