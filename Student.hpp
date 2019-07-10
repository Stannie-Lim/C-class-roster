/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#ifndef STUDENT_HPP 	//###################################################################
#define STUDENT_HPP		//##	defines student.hpp as									   ##
#include "Person.hpp"	//##	the header file. must include person.hpp as the base class ##
#include <string>		//###################################################################

//creates class Student as a inherited class of Person
class Student: public Person 
{
	//public interface that accesses the protected variables of student.hpp and person.hpp
	public:
		
		//default values for major_, gpa_, id_, last_name_ and first_name_
		Student();
		
		//sets values for id, firstname and lastname
		Student(int id, std::string first, std::string last);
		
		//returns major of student
		std::string getMajor() const;
		
		//returns gpa of student
		double getGpa() const;
		
		//user inputs major of student 
		void setMajor(const std::string major);
		
		//user inputs gpa of student
		void setGpa(const double gpa); 
		
		//overrides the pure virtual display() function in Person
		void display() override;
		
	//protected values: inherited classes can access these
	protected:
		std::string major_;
		double gpa_;
};

#endif
