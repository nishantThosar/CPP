/*Cpp program for parameterized constructor*/

#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
	double salary;
public:
	string name;
	string dept;
	string subject;

//Parameterized Constructor
	teacher(string teacher_name, string teacher_department, string teacher_subject, double teacher_salary)
	{
		name 	= teacher_name;
		dept 	= teacher_department;
		subject = teacher_subject;
		salary 	= teacher_salary;
	} //constructor ends
};//class ends

int main(void)
{
	teacher Teacher_1("Kaushal Sharma", "DESD", "DSA", 100000000); //like this we can pass values in single line if parameterized constructor is used.
	cout<< Teacher_1.name<<"\n"<<endl; //this is how we can access the variables (Attributes) of the class if it is public.
	// Teacher_1.salary = 15000; //this is not valid as the salary is private and cannot be accessed in the main function.
	return 0;
}