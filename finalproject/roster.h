#pragma once
#include<string>
#include<iostream>
#include "student.h"
using namespace std;

// creat student table


	const int numStudents = 6;
	static string studentData[numStudents] =
	{
		"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,D,S,DS@wgu.edu,31,25,34,31,SOFTWARE"
	};

//E.  Create a Roster class
class Roster {


public:
	//E.3 Add void add fucntion
	void add(string studentID, string firstName, string lastName, string emailAddress, int age,
		int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	int lastIndex;
	int capacity;
	Student** classRosterArray;
	void parseAdd(string row);
	void print_All();
	bool remove(string studentID);
	void printAverageDaysInCourse(string studentID);
	void printByDegreeProgram(DegreeProgram d);
	void printInvailidDaysEntires();
	
	Roster();
	Roster(int capacity);
	~Roster();

};

