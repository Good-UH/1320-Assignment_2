#include "UndergradStudent.h"


UndergradStudent::UndergradStudent() : Student(), type_classification(0) {

}

UndergradStudent::UndergradStudent(string firstName, string lastName, int studentID, int typeclassification) : Student(firstName, lastName, studentID) {
	type_classification = typeclassification;
}

int UndergradStudent::getClassification() {
	return type_classification;
}

string UndergradStudent::getInfo() {
	string output;

	switch (type_classification) {
	case 1: output = " Freshman";
		break;
	case 2: output = " Sophomore";
		break;
	case 3: output = " Junior";
		break;
	case 4: output = " Senior";
		break;
	default:
		break;
	}
	return Student::getInfo() + output;


}
UndergradStudent::~UndergradStudent() {

}