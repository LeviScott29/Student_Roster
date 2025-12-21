#include <vector>
#include "roster.h"
#include <string>
#include "student.h"
#include <sstream>
#include "degree.h"


const std::string Roster::studentData[5] = {
      "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",

      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",

      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",

      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",

      "A5,Levi,Scott,angel.of.secrets8@gmail.com,37,28,52,36,SOFTWARE" };

 std::vector<std::string> Roster::split(const std::string& str) {
    std::vector<std::string> tokens;
    std::string token;
    std::stringstream ss(str);
    while (getline(ss, token, ',')) {
        tokens.push_back(token);
    }
    return tokens;
}
 Student Roster:: parseData(const std::string& line) {
     std::vector<std::string> parsedData = split(line);
     std::string studentID = parsedData[0];
     std::string firstName = parsedData[1];
     std::string lastName = parsedData[2];
     std::string emailAddress = parsedData[3];
     int age = std::stoi(parsedData[4]);
     int daysToComplete[3] = { std::stoi(parsedData[5]), std::stoi(parsedData[6]), std::stoi(parsedData[7]) };
     DegreeProgram dp;
     if (parsedData[8] == "SECURITY") {
         dp = SECURITY;
     }
     else if (parsedData[8] == "NETWORK") {
         dp = NETWORK;
     }
     else if (parsedData[8] == "SOFTWARE") {
         dp = SOFTWARE;
     }
     else {
         throw std::runtime_error("invalid program" + parsedData[8]);
     }
     return Student(studentID, firstName, lastName, emailAddress, age, daysToComplete, dp);
 }
 void Roster::addExistingStudents() {
     for (const std::string& data : studentData) {
         Student student = parseData(data);
         classRosterArray.push_back(new Student(student));
     }
 }
 void Roster::printAll() {
     for (const Student* student : classRosterArray) {
         student->print();
     }
 }
 void Roster::Add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
     int daysToComplete[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
     Student student(studentID, firstName, lastName, emailAddress, age, daysToComplete, degreeProgram);
     classRosterArray.push_back(new Student(student));
 }
 void Roster::Remove(const std:: string& studentID) {
         for (auto i = classRosterArray.begin(); i != classRosterArray.end(); ++i) {
             if ((*i)->GetStudentID() == studentID) {
                 delete *i;
                 classRosterArray.erase(i);
                 return;
             }
         }
     }
 void Roster::printAverageDaysInCourse(std::string studentID) {
     int sum = 0;
     for (auto it = classRosterArray.begin(); it != classRosterArray.end(); ++it) {
         if ((*it)->GetStudentID() == studentID) {
             const int* numDays = (*it)->GetNumberOfDaysToCompleteEachCoursenumber();
                 for (int i = 0; i < 3; ++i) {
                     sum += numDays[i];
                 }
             std::cout << sum / 3;
         }
     }
 }
 void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
     for (auto it = classRosterArray.begin(); it != classRosterArray.end(); ++it) {
         if ((*it)->GetDegreeProgram() == degreeProgram) {
             (*it)->print();
         }
     }
 }
 void Roster::printInvalidEmails() {
     for (auto it = classRosterArray.begin(); it != classRosterArray.end(); ++it) {
         std::string email = (*it)->GetEmailAddress();
         char period = '.';
         char atSymbol = '@';
         if (email.find(period) ==std::string::npos || email.find(atSymbol) == std::string::npos || email.find(' ') != std::string::npos){
             std::cout << email<<std::endl;
         
         }

     }
 }
 Roster::~Roster() {
     for (Student* student : classRosterArray) {
         delete student;
     }
     classRosterArray.clear();
 }
