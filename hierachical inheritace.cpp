#include<iostream>
using namespace std;
class parents
{
	public:
		void parentsname()
		{
			cout<<"parents's name"<<endl;
		}
};
class child1:public parents
{
	public:
		void child1name()
		{
			cout<<"child1 name"<<endl;
		}
};
class child2:public parents
{
	public:
		void child2name()
		{
			cout<<"child2 name"<<endl;
		}
};
class child3:public parents
{
	public:
		void child3name()
		{
			cout<<"child3 name"<<endl;
		}
};
int main()
{
	child1 obj1;
	child2 obj2;
	child3 obj3;
	obj1.child1name();
	obj1.parentsname();
	obj2.child2name();
	obj2.parentsname();
	obj3.child3name();
	obj3.parentsname();
	return 0;
}
