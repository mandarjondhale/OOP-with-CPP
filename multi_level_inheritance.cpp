/* Program to implement Multilevel inheritance
153_mandar jondhale
17.05.2022*/

#include<iostream>
using namespace std;

//Created class 'student' as a parent or base class for all other classes.
class student
{
	public: int roll_no;
	
		void set_no(int a)
		{
			roll_no=a;
		}
		void display1()
		{
			cout<<"Roll no:"<<roll_no<<endl;
		}
};

//Created class 'test' as a child class of class 'student' that inherits the properties of base class publically.
class test:public student
{
	public: int sub1,sub2;
		void set_marks(int a,int b)
		{
			sub1=a;
			sub2=b;
		}
		void display2()
		{
			cout<<"Marks of first subject:"<<sub1<<endl<<"Marks of second subject:"<<sub2<<endl;
		}
};

//Created class 'total' that inhertits the properties of class 'test' as well as class 'student' because of multilevel inheritance.
class total:public test
{
	public: int total;
		void display3()
		{
			total=sub1+sub2;	
			display1();
			display2();
			cout<<"Total Marks:"<<total<<endl;
		}
};
	
int main()
{
	//here, created object of very child class i.e. class 'total'.
	total X;
	X.set_no(153);
	X.set_marks(90,90);
	X.display3();
}
	
	
	
	
	
	
	
	
	


		
