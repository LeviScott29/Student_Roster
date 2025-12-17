#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h"
class Student {

private:
	std::string studentID;

	std::string firstName;

	std::string lastName;

	std::string emailAddress;

	int age;

	int numberOfDaysToCompleteEachCourseNumber[3];

	DegreeProgram degreeProgram;
public:
	void SetStudentID(std::string studentID);
	void SetFirstName(std::string firstName);
	void SetLastName(std::string lastName);
	void SetEmailAddress(std::string emailAddress);
	void SetAge(int age);
	void SetNumberOfDaysToCompleteEachCourseNumber(const int DaysToComplete[]);
	std::string GetStudentID();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetEmailAddress();
	int GetAge() const;
	const int* GetNumberOfDaysToCompleteEachCoursenumber() const;
	DegreeProgram GetDegreeProgram() const;
	void print() const;
	Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int DaysToComplete[], DegreeProgram degreeProgram);
};
#endif //STUDENT_H