/*Non-Parameterized constructor in CPP*/
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
	string depart;
	
	//This is how we write non-parameterized constructor.
	teacher(){
		name = "Kaushal Sharma";
		subject = "DSA";
		depart = "DESD";
	} 
	//Public method of class
	void display() 
	{
		cout<<name<<endl;
		cout<<subject<<endl;
		cout<<depart<<endl;
	}
};

int main(void)
{
	teacher Teacher_1; //this is non parameterized constructor will be called & will assign default values to attributes.
	//Assigning a value to the attribute.
	Teacher_1.name 		= "Mukul Sharma"; 
	Teacher_1.subject 	= "Security concepts";
	Teacher_1.depart 	= "DITTIS";

	teacher Teacher_2; //created 2nd object.
	/*In the 2nd object I haven't initialized any attributes therefore it will take default attributes.*/
	cout<<"Calling Teacher_2 which will print default attributes"<<endl;

	Teacher_2.display(); //this will display all the attribute values of object.
	cout<<"\n"<<endl;


	cout<<"Printing Teacher_1 (The attributes has been initialized in main function.)"<<endl; //for accessing only one attribute of the class.

	Teacher_1.display(); //this is method of class by which we are displaying all the attributes of the class
	return 0;
}
