#include "Student.h"

#include "Student.h"

Student::Student(char* firstName, char* lastName, double studentGrade) :Human(firstName, lastName)
{
    this->studentGrade = studentGrade;
}

Student::Student() : Human()
{
    studentGrade = 0;
}

Student::Student(const Student& other)
{
    //Human::Human(other);
    this->studentGrade = other.studentGrade;
}

Student& Student::operator=(const Student& other)
{
    if (this != &other)
    {
        Human::operator=(other);
        this->studentGrade = other.studentGrade;
    }
    return *this;
}

double Student::getStudentGrade()
{
    return this->studentGrade;
}

void Student::setStudentGrade(double studentGrade)
{
    this->studentGrade = studentGrade;
}


void Student::printInfo()
{
    std::cout << getFirstName() << std::endl;
    std::cout<< getLastName() << std::endl;
    std::cout<< getStudentGrade() << std::endl;
}
