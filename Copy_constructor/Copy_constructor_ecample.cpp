/*Copy constructor*/
/*Copy constructor copies attributes value (properties) of one object to another object.*/
//If we don't write a user defined copy constructor then default constructor will be called.
//"endl" flush the output buffer.

#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
	double salary;
	string name;
public:
	string dept;
	string subj;

//non parameterized constructor.
	teacher()
	{
		this->name = "Shrinivas Jawade";
		this->salary = 15000;
	}
//writing user defined copy constructor.
	/*If any of the attributes are missing in the copy constructor the garbage value will be given.*/
	teacher(teacher &obj) //passing by reference
	{
		cout<<"In custom copy constructor"<<endl;
		this->name = obj.name;
		this->dept = obj.dept;
		this->subj = obj.subj;
		this->salary = obj.salary;
	}//copy constructor ends

//display method to display the values of attributes of class.
	void display()
	{
		cout<<name<<endl;
		cout<<dept<<endl;
		cout<<subj<<endl;
		cout<<salary<<endl;
		cout<<endl;
	}//display method ends
	
};//class ends

int main(void)
{
	teacher Teacher_1; //creating a obj of teacher class.
	Teacher_1.dept = "DAI";
	Teacher_1.subj = "Math";
	// Teacher_1.salary = 182660; //not allowed as salary is private.
	Teacher_1.display();
	
	teacher Teacher_2(Teacher_1); //copy constructor calling.
	Teacher_2.display();
	return 0;
}//main ends