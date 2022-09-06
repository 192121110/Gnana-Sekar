#include<iostream>
using namespace std;
class a
{
	public:
		a( int a)
		{
			cout<<"c";
		}
		a(int c,int b )
		{
			cout<<"d";
		}
};
int main()
{
	a obj(1);
	a obj1(9,8);
	return 0;
}
