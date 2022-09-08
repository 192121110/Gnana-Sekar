#include<iostream>
using namespace std;
class area
{
	public:
		void put(int l,int b)
		{
			cout<<"area of rectangle :"<<l*b<<endl;
		}
		void put(int a)
		{
			cout<<"area of square :"<<a*a<<endl;
		}
};
int main()
{
	area obj;
	obj.put(6);
	obj.put(5,8);
	return 0;
}
