#include<iostream>
using namespace std;
int main()
{
	int a,i,m=1;
	cout<<"enter the number:";
	cin>>a;
	if(a>=1)
	{
		for(i=1;i<=a;i++)
		{
			cout<<i;
			m=m*i;
		}
		cout<<"the factorial of "<<a<<" is "<<m;
	}
	else if(a==0)
	{
		cout<<"the factorial of "<<a<<" is "<<m;
	}
	else
	{
		cout<<"number should be positive";
	}
}
