#include "degree.h"
#include "student.h"
#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

int main() {
	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "C++" << endl;
	cout << "012731511" << endl;
	cout << "Levi Scott" << endl;
	cout << " " << endl;
	Roster classRoster;
	classRoster.addExistingStudents();
	cout << "Current Roster" << endl;
	classRoster.printAll();
	cout << " " << endl;
	classRoster.printInvalidEmails();
	cout << " " << endl;
	cout << "Averages for days in course are:" << endl;
	for (Student* student : classRoster.getStudents()) {
		classRoster.printAverageDaysInCourse(student->GetStudentID());
	}
	cout << " " << endl;
	cout << "Students in software program:" << endl;
	classRoster.printByDegreeProgram(SOFTWARE);
	cout << " " << endl;
	classRoster.remove("A3");
	cout << "roster after removal" << endl;;
	classRoster.printAll();
	cout << " " << endl;
	classRoster.remove("A3");
		

	return 0;
}
