#include "Student.h"

int Student::numberOfStudents = 0;

Student::Student() : first_name(""), last_name(""), student_ID(0)
{
	numberOfStudents++;
}

Student::Student(string firstName, string lastName, int studentID) {
	numberOfStudents++;

	first_name = firstName;
	last_name = lastName;
	student_ID = studentID;
}

string Student::getInfo() {
	return first_name + " " + last_name;
}

int Student::getID() {
	return student_ID;
}
Student::~Student() {

}