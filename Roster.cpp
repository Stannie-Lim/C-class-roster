#include <string>
#include <iostream>
#include <sstream>	
#include <fstream>
#include "Student.hpp"
#include "Person.hpp"
#include "TeachingAssistant.hpp"
#include "List.hpp"
#include "Roster.hpp"
#include "Instructor.hpp"
#include "PrecondViolatedExcep.hpp"


//empty default constructor
Roster::Roster()
{
	
}

//deallocates all the memory that was allocated for the Person pointers
Roster::~Roster()
{
	
}
//returns a random number between 0 and 23 
int Roster::randHours()
{
	return rand() % 23;
}
//randomly generated information for the role of the TA
ta_role Roster::randRole()
{
	return ta_role(rand() % 2);
}
//randomly generated gpa for the TA and the students. Not used for instructor because instructors dont
//have gpa, although professor Ligorio deserves a 4.0 gpa
double Roster::randGpa()
{
	double randomGpa[9] =  {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0};
	return randomGpa[rand() % 8];
}
/**
@return a string randomly sampled from
 {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
"Theatre", "Computational Biology", "Mathematics", "Geography",
"Linguistics"}
 */
std::string Roster::randMajor()
{
	std::string randomMajor[10] =  {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
"Theatre", "Computational Biology", "Mathematics", "Geography",
"Linguistics"};
	return randomMajor[rand() % 9];
}
//this function does all of the work for putting the information stored in the file
//into a linked list. first it separates the id, first name, last name and title
//into variables. afterwards, according to the title of the person, it creates
//either a student pointer, a TA pointer or an instructor pointer. then, it 
//inserts the Person object (because all of the above are derived from Person object)
//into the linked list.
Roster::Roster(std::string input_file_name)
{
	std::ifstream data_file(input_file_name);
	std::string student_line;
	while(getline(data_file, student_line))
	{
		std::stringstream input_name(student_line);
		std::string inputid_;
		std::string inputfirst_;
		std::string inputlast_;
		std::string inputtitle_;
		getline(input_name, inputid_, ',');
		getline(input_name, inputfirst_, ',');
		getline(input_name, inputlast_, ',');
		getline(input_name, inputtitle_);
		if(inputtitle_ == "student")
		{
			Student* s = new Student;
			s->setFirstName(inputfirst_);
			s->setLastName(inputlast_);
			s->setGpa(Roster::randGpa());
			s->setMajor(Roster::randMajor());
			Person* mystudent = s;
			List::insert(List::getLength(),mystudent);
		}
		else if(inputtitle_ == "teaching_assistant")
		{
			TeachingAssistant* ta = new TeachingAssistant;
			ta->setFirstName(inputfirst_);
			ta->setLastName(inputlast_);
			ta->setHours(Roster::randHours());
			ta->setGpa(Roster::randGpa());
			ta->setMajor(Roster::randMajor());
			Person* myTA = ta;
			List::insert(List::getLength(),myTA);
		}
		else if(inputtitle_ == "instructor")
		{
			Instructor* prof = new Instructor;
			prof->setFirstName(inputfirst_);
			prof->setLastName(inputlast_);
			prof->setContact("235Instructors@hunter.cuny.edu");
			prof->setOffice("1000C");
			Person* myprof = prof;
			List::insert(List::getLength(),myprof);
		}
	}
}
//displays all items in the linked list
void Roster::display()
{
	for(int i=0;i<List::getLength();i++)
	{
		List::getItem(i)->display();
	}
}
