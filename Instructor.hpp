/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/


#ifndef INSTRUCTOR_HPP	//#################################################################################
#define INSTRUCTOR_HPP	//## instructors aren't students or TA, only people, so its base class is Person ##
#include "Person.hpp"	//#################################################################################
#include <string>
class Instructor: public Person
{
	public:
		//default constructor for instructor
		Instructor();
		
		//sets values for instructor
		Instructor(int id, std::string first, std::string last);
		
		//just returns office of the instructor
		std::string getOffice() const;
		
		//just returns contact info of the instructor
		std::string getContact() const;
		
		//user inputs office of the instructor
		void setOffice(const std::string office);
		
		//user inputs contact info for instructor
		void setContact(const std::string contact);
		
		//overrides the virtual display() function in Person
		void display() override;
		
	//these are private instead of protected because nothing is derived from Instructor
	private:
		std::string office_;
		std::string contact_;
};

#endif
