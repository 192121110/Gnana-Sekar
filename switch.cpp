#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g;
	cout<<"enter the number";
	cin>>a;
	cout<<"enter the number";
	cin>>b;
	cout<<"enter the choice";
	cin>>c;
	switch(c)
	{
		case 1:
			d=a+b;
			cout<<"addition of a and b is "<<d;
			break;
		case 2:
			d=a-b;
			cout<<"subraction of a and b is "<<d;
			break;
		case 3:
			d=a*b;
			cout<<"muliplication of a and b is "<<d;
			break;
		case 4:
			d=a-b;
			cout<<"division of a and b is "<<d;
			break;
	}
	
} 
