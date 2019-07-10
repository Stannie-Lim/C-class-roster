/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#ifndef PERSON_HPP	//####################################
#define PERSON_HPP	//## defines header file for person ##
#include <string>	//####################################

//makes the base class called Person
class Person
{
	//public is used for obtaining the protected values
	public:
	
		//constructor. i use it for setting default values for the protected variables.
		Person();
		
		//sets values for the protected variables
		Person(int id, std::string first, std::string last);
		
		//just returns id_
		int getID() const;
		
		void setFirstName(std::string first);
		
		void setLastName(std::string last);
		
		//returns first_name_
		std::string getFirstName() const;
		
		//returns last_name_
		std::string getLastName() const;
		
		//tests inheritance
		std::string inheritanceTest() const;
		
		//checks if there are duplicate Person objects
		friend bool operator==(const Person& check_if_equal, const Person& check_if_also_equal);
		
		//pure virtual function to display. each derived class has a different display() function.
		virtual void display() = 0;
		
		
		
	protected:
		//creates protected variable for student id. can be used with inherited classes
		int id_;
		
		//same thing but for first name
		std::string first_name_;
		
		//same thing but for last name
		std::string last_name_;
};

#endif
