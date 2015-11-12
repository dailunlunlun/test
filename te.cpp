#include <iostream>
using namespace std;

class Person
{
	public:
		void print()
		{
			cout<<" this is a person's name "<<this->name<<endl;
		}
	private:
		string name="jiehao";
};

int main()
{
	Person p;
	p.print();
	return 0;
}
