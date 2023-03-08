/* Simple program to implement Multiple Inheritance
153_Mandar Jondhale
17.05.2022*/

#include<iostream>
using namespace std;

//Created class 'A' as a base class. 
class A
{
	public: int m;
		void set_data1(int a)
		{
			m=a;
		}
};

//Created class 'B' also as a base class.
class B
{
	public: int n;
		void set_data2(int a)
		{
			n=a;
		}
};

//Created class 'C' as a child class of both class 'A' & class 'B' that inherits the properties of both class A and B.
class C: public A,public B
{
	public: void display()
		{
			cout<<"X:"<<m<<endl;
			cout<<"Y:"<<n<<endl;
			cout<<"X+Y:"<<m+n<<endl;
		}
};

int main()
{
	//here, created object of class 'C' that accesses properties of both classes.
	C object;
	object.set_data1(10);
	object.set_data2(20);
	object.display();
}












