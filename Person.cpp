/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#include "Person.hpp"	//################################################################
#include <iostream>		//##	need to include all the header files used by this file	##
#include <string>		//################################################################

//default values for the constructor
Person::Person()
{
	//default id for the person
	id_ = -1;
	
	//default first name 
	first_name_ = " ";
	
	//default last name
	last_name_ = " ";
}

//sets values for id, first name and last name
Person::Person(int id, std::string first, std::string last)
{
	//sets protected variable id_ to user input id
	id_ = id;
	
	//same thing but for first name
	first_name_ = first;
	
	//same thing but for last name
	last_name_ = last;
}

//function to return id_
int Person::getID() const
{
	return id_;
}

//allows user to set value for the first name
void Person::setFirstName(std::string first)
{
	first_name_ = first;
}

//allows user to set value for last name
void Person::setLastName(std::string last)
{
	last_name_ = last;
}

//function to return first_name_
std::string Person::getFirstName() const
{
	return first_name_;
}

//function to return last_name_
std::string Person::getLastName() const
{
	return last_name_;
}

std::string Person::inheritanceTest() const
{
	return first_name_ + " " + last_name_;
}

//function to check whether two Person objects are equal
bool operator==(const Person& check_if_equal, const Person& check_if_also_equal)
{
	if(check_if_equal.first_name_ == check_if_also_equal.first_name_ and check_if_equal.last_name_ == check_if_also_equal.last_name_ and check_if_equal.id_ == check_if_also_equal.id_)
	{
		return true;
	}
	return false;
}









