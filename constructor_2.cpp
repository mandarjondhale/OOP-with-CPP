/*Simple program to implement default and parameterized constructor in CPP .
153_Mandar Jondhale
30.04.2022*/

#include<iostream>
using namespace std;

class sample
{
	int x,y;
	public: sample()
		{
			x=60;
			y=20;
			cout<<x+y<<endl;
		}
		sample(int a,int b)
		{
			cout<<a+b<<endl;
		}
		sample(int p,int t,float r=10)
		{
			float m;
			m=(p*t*r)/100;
			cout<<m<<endl;
		}
};
int main()
{
	sample S;
	sample S1(10,10);
	sample S2(1000,2,8);
}



