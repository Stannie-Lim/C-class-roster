#include "Person.hpp"
#include "Student.hpp"
#include "TeachingAssistant.hpp"
#include "Instructor.hpp"
#include "List.hpp"
#include "Node.hpp"
#include "Roster.hpp"
#include "PrecondViolatedExcep.hpp"
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	/* Student me;
	me.setMajor("computer science");
	me.setGpa(5.0);
	me.display();
	TeachingAssistant him;
	him.setMajor("compsci");
	him.setGpa(4.9);
	him.setHours(7);
	him.display();
	Instructor prof;
	prof.setOffice("1000C");
	prof.setContact("235Instructors");
	prof.display(); */
	Roster myroster("data.csv");
	myroster.display();
}
