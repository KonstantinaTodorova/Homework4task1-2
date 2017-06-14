#pragma once
#include <Employee.h>


class Specialist : public Employee
{
    public:
        Specialist();
        ~Specialist();
        Specialist(char*, char*, Department, double ,char*);
        Specialist(const Specialist& other);
        Specialist& operator=(const Specialist& other);

        const char* getDepartmentDescription() const;

        void setDepartmentDescription(char*);

    protected:
        char* departmentDescription;

    private:
        void copy(const Specialist& other);
        void destroy();

};


