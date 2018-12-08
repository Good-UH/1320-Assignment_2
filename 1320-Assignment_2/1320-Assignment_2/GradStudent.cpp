#include "GradStudent.h"
#include "Student.h"


GradStudent::GradStudent() : Student(), type_degree(""), undergrad_degree("")
{
}

GradStudent::GradStudent(string firstName, string lastName, int studentID, string typeDegree, string undergradDegree) : Student(firstName, lastName, studentID) {
	type_degree = typeDegree;
	undergrad_degree = undergradDegree;
}

string GradStudent::getdegree() {
	return type_degree;
}

string GradStudent::getPreviousdegree() {
	return undergrad_degree;
}

string GradStudent::getInfo() {
	//string result;

	/*switch (type_degree) {
	case('D'): result = "D";
		break;
		/*case('A'): result = "A";
		break;
	default:
		break;
	}
	*/
	return Student::getInfo() + " " + type_degree + " degree in " + undergrad_degree;
}
GradStudent::~GradStudent() {

}
