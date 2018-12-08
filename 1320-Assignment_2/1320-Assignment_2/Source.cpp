#include <iostream>
#include <string>
#include "Student.h"
#include "UndergradStudent.h"
#include "GradStudent.h"
using namespace std;

int main()
{
	//Array list
	Student *list[3];
	list[0] = new Student("Hakan", "Haberdar", 1234);
	GradStudent s1("Hakan", "Haberdar", 1234, "Bachelors", "Electrical  Engineering");
	list[1] = &s1;
	UndergradStudent s2("Hakan", "Haberdar", 1234, 1);
	list[2] = &s2;

	cout << list[0]->getID() << " " << list[0]->Student::getInfo() << endl;// Student::getInfo is called from base class
	cout << list[1]->getID() << " " << list[1]->Student::getInfo() << endl;// Student::getInfo is called from base class
	cout << list[2]->getID() << " " << list[2]->Student::getInfo() << endl;// Student::getInfo is called from base class
	cout << list[1]->getID() << " " << list[1]->getInfo() << endl; // GradStudent::getInfo is called
	cout << list[2]->getID() << " " << list[2]->getInfo() << endl; // UndergradStudent::getInfo is called

	system("pause");
	return 0;

	//delete[] list;
}