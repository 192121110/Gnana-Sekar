#include<iostream>
using namespace std;
class grandfather
{
	public:
		void grandfathername()
		{
			cout<<"grandfather's name"<<endl;
		}
};
class father:public grandfather
{
	public:
		void fathername()
		{
			cout<<"father's name"<<endl;
		}
};
class child:public father
{
	public:
		void childname()
		{
			cout<<"child name";
		}
};
int main()
{
	father obj1;
	child obj2;
	obj1.fathername();
	obj1.grandfathername();
	obj2.fathername();
	obj2.childname();
	return 0;
}
