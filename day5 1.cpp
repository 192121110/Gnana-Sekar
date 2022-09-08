#include<iostream>
using namespace std;
class degree
{
	public:
		void getdegree()
		{
			cout<<"I got a degree"<<endl;
		}
};
class undergratuate:public degree
{
	public:
		void put()
		{
			cout<<"I am an undergratuate"<<endl;
		}
};
class postgratuate:public degree
{
	public:
		void put()
		{
			cout<<"I am an postgratuate"<<endl;
		}
};
int main()
{
	undergratuate obj1;
	postgratuate obj2;
	obj1.getdegree();
	obj1.put();
	obj2.getdegree();
	obj2.put();
	return 0;
}
