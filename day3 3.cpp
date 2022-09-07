#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],sub[10][10],r,c,i,j;
	cout<<"enter the row";
	cin>>r;
	cout<<"enter the column";
	cin>>c;
	cout<<"enter the a matrix"<<endl;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"matric a"<<i+1<<j+1;
			cin>>a[i][j];
		}
	}
	cout<<"enter the b matrix"<<endl;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"matric b"<<i+1<<j+1;
			cin>>b[i][j];
		}
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"subraction of the matrix"<<endl;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<sub[i][j]<<"  ";
			if(j==c-1)
			{
				cout<<endl;
			}
		}
	}
	cout<<endl;
	return 0;
}
