#include<iostream>
using namespace std;

class Employee {
	public:
	virtual int getSalary() = 0;
};

class Employee_1: public Employee {
	int salary;
public:
	Employee_1(int s){ salary = s; }
};

class Employee_2: public Employee {
	int salary;
public:
	Employee_2(int t){ salary = t; }
	int getSalary(){ return salary; }
};
int main()
{
	Employee_1 e1(5000);
	Employee_2 e2(3000);
	int a, b;
	a = e1.getSalary();	b = e2.getSalary();
	cout<<"Salary of Developer: "<< a <<endl;
	cout<<"Salary of Driver: "<< b <<endl;
	return 0;
}
