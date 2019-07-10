/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#ifndef TEACHINGASSISTANT_HPP	//######################################
#define TEACHINGASSISTANT_HPP	//##	TA are people and students	  ##	 	
#include "Student.hpp"			//##	but not instructors			  ##
#include "Person.hpp"			//######################################
#include <string>


//all possible roles for the TA
enum ta_role {LAB_ASSISTANT, LECTURE_ASSISTANT, FULL_ASSISTANT};


//base class is student and TA are students too, so derived class is TA
class TeachingAssistant: public Student
{
	public: 
		//default values (constructor) for TA
		TeachingAssistant();
		
		//sets values for TA
		TeachingAssistant(int id, std::string first, std::string last);
		
		//function to return amount of hours that the TA works
		int getHours() const;
		
		//returns the current role of the TA
		ta_role getRole() const;
		
		//user input amount of hours for the TA
		void setHours(const int hours);
		
		//user input role for the TA
		void setRole(const ta_role role); 
		
		//overrides the pure virtual display function from Person
		void display() override; 
		
	private:
		int hours_per_week_;
		ta_role role_; 
		
};

#endif
