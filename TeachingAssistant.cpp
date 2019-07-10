/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#include "TeachingAssistant.hpp" 	//############################################################
#include "Student.hpp"				//##	TeachingAssistant is a derived class of Student,    ##
#include "Person.hpp"				//##	which is also a derived class of Person				##
#include <iostream>					//############################################################
#include <string>	

//default constructor for TA
TeachingAssistant::TeachingAssistant()
{
	//default hours per week for each TA
	hours_per_week_ = 0;
	
	//default role for the TA
	role_ = LAB_ASSISTANT;
}
//sets values for TA
TeachingAssistant::TeachingAssistant(int id, std::string first, std::string last): Student(id, first, last)
{
	id_ = id;
	first_name_ = first;
	last_name_ = last;
}
//gives hours that a TA works
int TeachingAssistant::getHours() const
{
	return hours_per_week_;
}
//gives the role for the TA
ta_role TeachingAssistant::getRole() const
{
	return role_;
}
//user inputs hours for TA
void TeachingAssistant::setHours(const int hours)
{
	hours_per_week_ = hours;
}
//user inputs role for TA
void TeachingAssistant::setRole(const ta_role role)
{
	role_ = role;
}

//overriding the virtual display function for Person and changing the role and job 
//according to the random number generator
void TeachingAssistant::display()
{
	//if random number generator gets a number below 8, it prints part-time instead of full-time
	std::string job = "full-time";
	if(hours_per_week_ < 8)
		job = "part-time";
	
	//without this, it would just print out 0,1 or 2 according to the random role generator
	std::string role__;
	switch(role_)
	{
		case LAB_ASSISTANT:
			role__ = "LAB_ASSISTANT";
			break;
		case LECTURE_ASSISTANT:
			role__ = "LECTURE_ASSISTANT";
			break;
		case FULL_ASSISTANT:
			role__ = "FULL_ASSISTANT";
			break;
	}
	
	//line to print out all the information of the TA
	std::cout << first_name_ << " " << last_name_ << " majors in " << major_ << " with gpa: " << gpa_ << " working " << job << " as a " << role__ << std::endl;
}
