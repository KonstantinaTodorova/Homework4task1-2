#include "Human.h"

void Human::copy(const Human& other)
{
    this->firstName = new char[strlen(other.firstName)+1];
    strcpy(this->firstName, other.firstName);
    this->lastName = new char[strlen(other.lastName)+1];
    strcpy(this->lastName, other.lastName);
}

void Human::destroy()
{
    delete this->firstName;
    delete this->lastName;
}
Human::Human(char* firstName, char* lastName)
{
    setFirstName(firstName);
    setLastName(lastName);
}
Human::Human()
{
    firstName = nullptr;
    lastName = nullptr;
}

Human::~Human()
{
    destroy();
}

Human::Human(const Human& other)
{
    copy(other);
}

Human& Human::operator=(const Human& other)
{
    if (this != &other);
    {
        destroy();
        copy(other);
    }
    return *this;
}
char* Human::getFirstName()
{
    return this->firstName;
}

char* Human::getLastName()
{
    return this->lastName;
}

void Human::setFirstName(char* firstName)
{
    delete[] firstName;
    this->firstName = new char[strlen(firstName)+1];
    strcpy(this->firstName, firstName);
}

void Human::setLastName(char* lastName)
{
    delete[] lastName;
    this->lastName = new char[strlen(lastName)+1];
    strcpy(this->lastName, lastName);
}

void Human::printInfo()
{
    std::cout<<getFirstName() << std::endl;
    std::cout<<getLastName() << std::endl;
}
