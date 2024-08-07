/*This pointer*/

#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
	double salary;
public:
	string name;
	string subject;
	string department;

//parameterized constructor (in this constructor we will be using "this" pointer)
	teacher(string name, string subject, string department, double salary=1500)
	{
		this->name = name;
		(*this).subject = subject; //legal
		this->department = department;
		this->salary = salary;
	}//para constructor ends

//class method
	void display()
	{
		cout<<name<<endl;
		cout<<department<<endl;
		cout<<subject<<endl;
		cout<<salary<<endl;
		cout<<"\n"<<endl;
	}//method ends
	
};// class ends

int main(void)
{
	teacher Teacher_1("Kaushal Sharma", "DSA", "DESD");
	Teacher_1.display(); //calling function(Method) of teacher class with reference object(Teacher_1).
	
	teacher Teacher_2("Mukul Sharma", "COSA", "DITTIS", 16230);
	Teacher_2.display();

	return 0;
}
