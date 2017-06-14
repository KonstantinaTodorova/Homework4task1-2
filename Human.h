#pragma once
#include <iostream>
#include <cstring>

class Human
{
    public:
        Human(char* firstName, char* lastName);
        Human();
        virtual ~Human();
        Human(const Human& other);
        Human& operator=(const Human& other);

        char* getFirstName();
        char* getLastName();

        void setFirstName(char*);
        void setLastName(char*);

        void printInfo();

    protected:

    private:
        char* firstName;
        char* lastName;

        void copy(const Human& other);
        void destroy();

};
