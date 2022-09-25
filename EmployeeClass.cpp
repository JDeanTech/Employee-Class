//Joshua Dean Homework Week 5
//Classes & Objects

#include <iostream>
#include <iomanip>
#include <string>
#include<cstring>
using namespace std;




class Employee //class identity
{
	// Private is only accessible from public and private of this class
	// Cannot access directly from main
private:		
	string name;
	int idNumber;
	string department;
	string position;



public:
	//This is where you put any functions that will need to be used
	//You also put any constructors and/or deconstructors 
	//Constructors determine if certain variables are not defined in main

	//This is first constructor that pulls the varables below and assigns them to 
	//the variale that will be in main function
	Employee(string empName, int empID, string empDept, string empPosition)
	{
		name = empName;
		idNumber = empID;
		department = empDept;
		position = empPosition;

	}
	//this is another function that will pill name and id
	// if not dept or position then it will assign them blank
	Employee(string empName, int empID)
	{
		name = empName;
		idNumber = empID;
		department = "";
		position = "";
	}
	//this is if nothing is given from client so everything is blank or 0
	Employee()
	{
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
	// These functions will allow us to display the data we have
	//since we cannot pull directly from private class
	string const getName()
	{
		return name;
	}
	int const getID()
	{
		return idNumber;
	}
	string const getDept()
	{
		return department;
	}
	string const getPOS()
	{
		return position;
	}

	
		
};




int main()
{
	 
	
	const int NUM = 3;	//const for array
	//array of employees
	Employee emp[NUM] = 
	{
	//emp1	
	Employee("Susan Meyers", 47899, "Accounting", "President"),
	//emp2	
	Employee("Mark Jones", 39119, "IT", "Programmer"),
	//emp3	
	Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")
	};
	
	
	cout << "\tEmployee's Details\n";
	cout << "************************************\n";
	cout << endl;

	for (int i = 0; i < NUM; i++)
	{
		cout << "Name: " << emp[i].getName() << endl;
		cout << "ID Number : " << emp[i].getID() << endl;
		cout << "Department: " << emp[i].getDept() << endl;
		cout << "Position: " << emp[i].getPOS() << endl;
		cout << endl;

	}


	return 0;
}













