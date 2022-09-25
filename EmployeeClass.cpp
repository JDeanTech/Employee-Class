//Joshua Dean Homework Week 5
//Classes & Objects

#include <iostream>
#include <iomanip>
#include <string>
#include<cstring>
using namespace std;




class Employee //class identity
{
private:
	string name;
	int idNumber;
	string department;
	string position;



public:
	
	Employee(string empName, int empID, string empDept, string empPosition)
	{
		name = empName;
		idNumber = empID;
		department = empDept;
		position = empPosition;

	}

	Employee(string empName, int empID)
	{
		name = empName;
		idNumber = empID;
		department = "";
		position = "";
	}
	Employee()
	{
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
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
	 
	
	const int NUM = 3;
	Employee emp[NUM] = 
	{
		Employee("Susan Meyers", 47899, "Accounting", "President"),
		Employee("Mark Jones", 39119, "IT", "Programmer"),
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













