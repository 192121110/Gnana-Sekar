#include<iostream>
using namespace std;
void add(int,int);
int main()
{
	add(2,3);
	add(0.4,0.5);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<c;
}
void add(float a,float b)
{
	int c;
	c=a+b;
	cout<<c;
}
