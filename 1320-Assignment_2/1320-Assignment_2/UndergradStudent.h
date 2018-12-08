#ifndef UNDERGRADSTUDENT_H
#define UNDERGRADSTUDENT_H
#include "Student.h"

#include <string>
using namespace std;

class UndergradStudent : public Student
{
public:
	//constructor
	UndergradStudent();
	UndergradStudent(string first_name, string last_name, int student_ID, int type_classification);

	//deconstructor
	~UndergradStudent();

	//functions
	string getInfo();

	//1 getter functions returning the values of these variables
	int getClassification();


private:

	int type_classification;
};
#endif