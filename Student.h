#pragma once

#include <Human.h>


class Student : public Human
{
    public:
        Student(char*, char*, double);
        Student();
        Student(const Student& other);
        Student& operator=(const Student& other);

        double getStudentGrade();

        void setStudentGrade(double);

        void printInfo();

    protected:

    private:
        double studentGrade;
};
