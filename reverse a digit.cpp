#include<iostream>
using namespace std;
int main()
{
	int a,n,sum=0;
	a=294;
	while(a!=0)
	{
		n=a%10;
		sum=sum*10+n;
		a=a/10;
	}
	cout<<"reverse number="<<sum;
	return 0;
}
