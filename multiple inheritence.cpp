#include<iostream>
using namespace std;
class father
{
	public:
		void fathername()
		{
			cout<<"father name"<<endl;
		}
};
class mother
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
			cout<<"child name";
		}
};
int main()
{
	child obj;
	obj.fathername();
	obj.mothername();
	obj.childname();
	return 0;
}
