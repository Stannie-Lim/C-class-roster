/*
Name: Stanley Lim
Introduces us to polymorphism and how to insert pointers to Person into a linked list.
*/

#ifndef ROSTER_HPP
#define ROSTER_HPP 
#include <string>
#include <iostream>
#include <sstream>		//######################################################
#include <fstream>		//##	fstream needed to open file. sstream needed   ##
#include "Student.hpp"	//##	to parse the data included in the file        ##
#include "Person.hpp"	//######################################################
#include "TeachingAssistant.hpp"
#include "List.hpp"
#include "Instructor.hpp"
#include "PrecondViolatedExcep.hpp"

//derived class is a linked list which stores pointers to Person. base class is Roster 
class Roster: public List<Person*>
{
	public:
		//default constructor
		Roster();
		
		//destructor. deallocates all the memory that was allocated for the Person pointers
		virtual ~Roster();
		
		//this function does most of the work needed. opens data.csv file and puts the data into variables and into the linked list
		Roster(std::string input_file_name);
		
		//returns random hours
		int randHours();
		
		/**
		@return a number randomly sampled from
		 {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0}
		 */
		double randGpa();
		
		/**
		@return a string randomly sampled from
		 {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
		"Theatre", "Computational Biology", "Mathematics", "Geography",
		"Linguistics"}
		 */
		std::string randMajor();
		
		/**
		@return a ta_role randomly sampled from
		 {LAB_ASSISTANT, LECTURE_ASSISTANT,FULL_ASSISTANT}
		 */
		ta_role randRole();
		
		
		//displays the list of the type of person that is created according to the data in the csv file
		void display();
};

#endif
