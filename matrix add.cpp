#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,x,y;
	cout<<"enter the row";
	cin>>x;
	cout<<"enter the row";
	cin>>y;
	cout<<endl<<"enter the matrix"<<endl;
	for (i=0;i<=x;i++)
	{
		for (j=0;j<=y;j++)
		{
			cout<<"enter the element a"<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	cout<<endl<<"enter the matrix"<<endl;
	for (i=0;i<=x;i++)
	{
		for (j=0;j<=y;j++)
		{
			cout<<"enter the element a"<<i+1<<j+1<<":";
			cin>>b[i][j];
		}
	}
	for (i=0;i<=x;i++)
	{
		for (j=0;j<=y;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<endl<<"sum of matrics is "<<endl;
	for (i=0;i<=x;i++)
	{
		for (j=0;j<=y;j++)
		{
			cout<<c[i][j]<<"  ";
			if(j==y-1)
			{
				cout<<endl;
			}
		}
	}
	return 0;
}
