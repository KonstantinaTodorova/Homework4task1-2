#include "Specialist.h"
#include <cstring>


void Specialist::copy(const Specialist& other)
{
    this->departmentDescription = new char[strlen(other.getDepartmentDescription())+1];
    strcpy(this->departmentDescription, other.departmentDescription);
}

void Specialist::destroy()
{
    delete[] this->departmentDescription;
}

Specialist::Specialist() :Employee()
{
    departmentDescription = NULL;
}

Specialist::~Specialist()
{
    destroy();
}

Specialist::Specialist(char* employeeName, char* employeeAddress, Department employeeDepartment, double employeeSalary, char* departmentDescription) : Employee(employeeName, employeeAddress, employeeDepartment, employeeSalary)
{
    setDepartmentDescription(departmentDescription);

}

Specialist::Specialist(const Specialist& other)
{
    copy(other);
}

Specialist& Specialist::operator=(const Specialist& other)
{
    if(this!=&other)
    {
        Employee::operator=(other);
        destroy();
        copy(other);
    }
    return *this;
}

const char* Specialist::getDepartmentDescription() const
{
    return this->departmentDescription;
}

void Specialist::setDepartmentDescription(char* departmentDescription)
{
    delete[] this->departmentDescription;
    this->departmentDescription = new char[strlen(departmentDescription) + 1];
    strcpy(this->departmentDescription, departmentDescription);
}





