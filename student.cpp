#include <string>
#include "student.h"
#include "degree.h"
#include <iostream>
void Student::SetStudentID(std::string studentID) {
	this->studentID = studentID;
}
void Student::SetFirstName(std::string firstName) {
	this->firstName = firstName;
}
void Student::SetLastName(std::string lastName) {
	this->lastName = lastName;
}
void Student::SetEmailAddress(std::string emailAddress) {
	this->emailAddress = emailAddress;
}
void Student::SetAge(int age) {
	this->age = age;
}
void Student::SetNumberOfDaysToCompleteEachCourseNumber(const int DaysToComplete[]) {
	int i;
	for (i = 0; i < 3; ++i) {
		this->numberOfDaysToCompleteEachCourseNumber[i] = DaysToComplete[i];
	}
}
std::string Student::GetStudentID() {
	return studentID;
}
std::string Student::GetFirstName() {
	return firstName;
}
std::string Student::GetLastName() {
	return lastName;
}
std::string Student::GetEmailAddress() {
	return emailAddress;
}
int Student::GetAge() const {
	return age;
}
const int* Student::GetNumberOfDaysToCompleteEachCoursenumber() const {
	return numberOfDaysToCompleteEachCourseNumber;
}
DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}
void Student::print() const {

			std::cout << studentID << "    ";
			std::cout << "First Name: " << firstName << "    ";
			std::cout << "Last Name: " << lastName << "    ";
			std::cout << "Email: " << emailAddress << "    ";
			std::cout << "Age: " << age << "    ";

			const int* days = numberOfDaysToCompleteEachCourseNumber;
			std::cout << "daysInCourse: {";
			for (int i = 0; i < 3; ++i) {
				std::cout << days[i];
				if (i < 2) {
					std::cout << ", ";
				}
				else {
					std::cout << "}";
				}
			}
			std::cout << "    ";

			std::cout << "Degree Program: "
				<< DegreeProgramToString(GetDegreeProgram())
				<< std::endl;
}
Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int DaysToComplete[], DegreeProgram degreeProgram)
{
	int i;
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (i = 0; i < 3; ++i) {
		this->numberOfDaysToCompleteEachCourseNumber[i] = DaysToComplete[i];
	}

	this->degreeProgram = degreeProgram;

}