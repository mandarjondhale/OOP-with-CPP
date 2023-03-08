/*Program to find the greatest number among three numbers using template.
153_mandar Jondhale
14.07.2022*/


#include<iostream>
using namespace std;
//Created template of class 'T'.
template<class T>
T greatest(T a,T b,T c)
{
	if(a>b)
	{
		if(a>c)
		return a;
		
		else
		return c;
	}
	else
	{
		if(b>c)
		return b;
		
		else 
		return c;
	}
}

int main()
{
	long double max,a,b,c;
	cout<<"Enter the values:"<<endl;
	cin>>a>>b>>c;
	max=greatest(a,b,c);
	cout<<"Greatest  : "<<max<<endl;
}












