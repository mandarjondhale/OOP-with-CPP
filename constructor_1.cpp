/* Simple program to implement default constructor.
153_Mandar Jondhale 
30.04.2022*/

#include<iostream>
using namespace std;

class sample
{
	int x,y;
	public: sample()
		{
			x=10;
			y=20;
			cout<<x+y<<endl;
		}
};

int main()
{
	sample S;
}

/*SECOND METHOD */

/*#include<iostream>
using namespace std;

class sample
{
	int x=10,y=20;
	
	public: sample()
		{
			cout<<x+y;
		}
}A;

int main()
{

}*/	 
