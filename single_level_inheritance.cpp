/* Program to implement single level inheritance
153_Mandar JOndhale
17.05.2022*/

#include<iostream>
using namespace std;

//Created class 'sample' as a base class.
class sample
{
	protected: int a,b;
	 
	public: void set_data(int x,int y)
		{
			a=x;
			b=y;
		}
};

//Created class 'demo' as a child class that inherits properties from class 'sample'.It publically inherits the properties of base class.
class demo:public sample
{
	public: void add()
		{
			cout<<a+b<<endl;
		}
};

int main()
{
	//here, created object of child class i.e. class 'demo' , that accesses the members of class 'sample'.
	demo D;
	D.set_data(10,20);
	D.add();
}

