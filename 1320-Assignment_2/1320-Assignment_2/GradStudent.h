#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include "Student.h"

class GradStudent : public Student
{
public:
	//constructor
	GradStudent();
	GradStudent(string first_name, string last_name, int student_ID, string type_degree, string undergrad_degree);

	//deconstructor
	~GradStudent();

	//functions
	string getInfo();

	//2 getter functions returning the values of these variables
	string getdegree();
	string getPreviousdegree();

private:
	string type_degree;
	string undergrad_degree;
};
#endif
