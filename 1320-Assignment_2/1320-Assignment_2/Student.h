#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using std::string;

class Student {
public:
	//constructor
	Student();
	Student(string first_name, string last_name, int student_ID);

	//deconstructor
	~Student();

	//functions
	virtual string getInfo();
	int getID();

	//variables
	static int numberOfStudents;

private:
	string first_name;
	string last_name;
	int student_ID;
};
#endif
