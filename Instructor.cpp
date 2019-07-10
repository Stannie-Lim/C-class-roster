/*
Name: Stanley Lim
Project 3
6/14/19
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#include "Instructor.hpp"	//###########################################################################
#include "Person.hpp"		//## instructors are people so base class is Person, derived is instructor ##
#include <string>			//###########################################################################
#include <iostream>

//default constructor for instructor with default values for person also
Instructor::Instructor(): Person(0," "," ")
{
	office_ = " ";
	contact_ = " ";
}
//values for id, firstname and last name 
Instructor::Instructor(int id, std::string first, std::string last): Person(id, first, last)
{
	id_ = id;
	first_name_ = first;
	last_name_ = last;
}
//just returns office for instructor
std::string Instructor::getOffice() const
{
	return office_;
}
//just returns contact info for instructor
std::string Instructor::getContact() const
{
	return contact_;
}
//allows user to input office of the instructor
void Instructor::setOffice(const std::string office)
{
	office_ = office;
}
//user input contact info of the instructor
void Instructor::setContact(const std::string contact)
{
	contact_ = contact;
}
//the main display function for instructor, overriding the pure virtual display function for Person
void Instructor::display()
{
	std::cout << first_name_ << " " << last_name_ << " - " << "office: " << office_ << ", email: " << contact_ << std::endl;
}

