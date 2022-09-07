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
class mother:public grandfather
{
	public:
		void mothername()
		{
			cout<<"mother name"<<endl;
		}
};
class child:public father,public mother
{
	public:
		void childname()
		{
			cout<<"child name"<<endl;
		}
};
int main()
{
	father o1;
	mother o2;
	child o3;
	o1.fathername();
	o1.grandfathername();
	o2.mothername();
	o2.grandfathername();
	o3.childname();
	o3.fathername();
	o3.mothername();
	return 0;
}
