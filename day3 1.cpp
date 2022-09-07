#include<iostream>
using namespace std;
class base1
{
	public:
		void base1name()
		{
			cout<<"hi"<<endl;
		}
		
};
class base2
{
	public:
		void base2name()
		{
			cout<<"hello"<<endl;
		}
		
};
class derive1:public base1
{
	public:
		void derive1name()
		{
			cout<<"welcome"<<endl;
		}
		
};
class derive2:public base1,public base2
{
	public:
		void derive2name()
		{
			cout<<"hello world"<<endl;
		}
		
};
int main()
{
	derive1 obj1;
	derive2 obj2;
	obj1.base1name();
	obj1.derive1name();
	obj2.base1name();
	obj2.base2name();
	obj2.derive2name();
	return 0;
	
}

