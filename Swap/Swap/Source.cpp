#include <iostream>
using namespace std;


class Student
{
	
	string Name;
};


bool Swap(Student &b, Student &j)
{
	Student billy = b;
	b = j;
	j = billy;
	return true;
}

int main()
{

	Student();
	Student b = Student("bob");
	Student j = Student("joe");



	system("pause");



}





























