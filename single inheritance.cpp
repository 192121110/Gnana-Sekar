#include<iostream>
using namespace std;
class parents
{
	public:
		void parentsname()
		{
			cout<<"mother name"<<endl<<"father name";
		}
};
class child:public parents
{
	public:
		void childname()
		{
			cout<<endl<<"your name";
		}
};
int main()
{
	child obj;
	obj.parentsname();
	obj.childname();
	return 0;
}
