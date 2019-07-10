/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#include "Student.hpp"	//############################################################
#include "Person.hpp"	//##	base file is person, because students are people	##
#include <iostream>		//############################################################
#include <string>		

//default student constructor with default values for person
Student::Student(): Person(0," "," ")
{
	major_ = " ";
	gpa_ = 0.0;
}
//sets values for id, firstname,lastname. can leave this as an empty function
Student::Student(int id, std::string first, std::string last): Person(id, first, last)
{
	
}
//just returns major of the student
std::string Student::getMajor() const
{
	return major_;
}
//returns gpa of the student
double Student::getGpa() const
{
	return gpa_;
}
//user inputs major for the student
void Student::setMajor(const std::string major)
{
	major_ = major;
}
//user inputs gpa for the student
void Student::setGpa(const double gpa)
{
	gpa_ = gpa;
}
//displays the Student object's first name, last name, major and gpa
void Student::display()
{
	std::cout << first_name_ << " " << last_name_ << " majors in " << major_ << " with gpa: " << gpa_ << std::endl;
}

