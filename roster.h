#ifndef ROSTER_H
#define ROSTER_H
#include <string>
#include <iostream>
#include <vector>
#include "student.h"
#include "degree.h"
class Roster {
private:
	std::vector<Student*> classRosterArray;

	static const std::string studentData[5];

	std::vector<std::string> split(const std::string& str);

	Student parseData(const std::string& line);
public:
	void addExistingStudents();

	void printAll();

	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(const std::string& studentID);

	void printAverageDaysInCourse(std::string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

	const std::vector<Student*>& getStudents() const;

	~Roster();
};

#endif //ROSTER_H