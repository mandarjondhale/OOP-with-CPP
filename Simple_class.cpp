/* || Implementation of class ||
Simple program to store and display the record of employees.
153_Mandar Jondhale
19.04.2022*/

#include<iostream>
using namespace std;

//Created class 'employee' to present employee's data.
class employee
{
	int emp_code;
	char emp_name[20];
	
	//Declared two methods of class 'employee'.
	public: void get_data();   
		void display();
};

//Main function//
int main()
{
	//Created array of objects of class employee that contains data of 5 employees.
	employee E[5];
	
	for(int i=0;i<5;i++)
	E[i].get_data();
	
	cout<<"Name of employee";
	cout<<"\tcode of employee"<<endl;
	
	for(int i=0;i<5;i++)
	E[i].display();
}

//here is the DEFINITION of method get_data() from class 'employee'.
void employee::get_data()
{
	//Scanning and storing data from user .
	cout<<"Enter the code of employee: "<<endl;
	cin>>emp_code;

	cout<<"Enter the name of employee: "<<endl;
	cin>>emp_name;
}

//here is the DEFINITION of method display() from class 'employee'.
void employee::display()
{
	//Printing data of employee.
	cout<<emp_name;
	cout<<"\t\t\t"<<emp_code <<endl;
}







