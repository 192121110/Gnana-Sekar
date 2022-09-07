#include<iostream>
using namespace std;
int main()
{
	int r,i,j;
	cout<<"enter tha row";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=i;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}
