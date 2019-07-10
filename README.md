# C-class-roster
**LIST, PRECONDVIOLATEDEXCEP, AND NODE CLASSES WERE NOT MADE BY ME** This program makes use of a data.csv file with first names, last names, and their role in a school. The program reads the file and creates new object pointers depending on what their role is. If the person is a teaching assistant, as marked in the csv file, a teachingassistant (or student object, or instructor object, depending on the role) object will be created and stored in a linked list, and displayed to the console.  

TO COMPILE:

g++ Person.cpp Student.cpp TeachingAssistant.cpp Instructor.cpp PrecondViolatedExcep.cpp Roster.cpp main.cpp -o main
