#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
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
			cout<<"sum is"<<d;
			break;
		case 2:
			d=a-b;
			cout<<"sub is"<<d;
			break;
		case 3:
			d=a*b;
			cout<<"muliplication is"<<d;
			break;
		case 4:
			d=a/b;
			cout<<"division is"<<d;
			break;
		case 5:
			d=a%b;
			cout<<"remainder is"<<d;
			break;
		default:
			cout<<"enter the correct choice";
	}
}
