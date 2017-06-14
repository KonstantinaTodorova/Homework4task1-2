#include "DepartmentChef.h"
#include <cstring>

void DepartmentChef::resize(int newSize)
{
    Employee** temp = new Employee*[employeesCapacity * 2];
    this->employeesCapacity *= 2;

    for(int i = 0; i < countOfEmployees; i++)
    {
        temp[i] = employee[i];
    }

    delete[] employee;

    employee = temp;
}

void DepartmentChef::copy(const DepartmentChef& other)
{
    for(int i = 0; i < employeesCapacity; i++)
    {
        delete[] employee[i];
    }
    delete[] employee;
    this->employeesCapacity = other.employeesCapacity;
    this->countOfEmployees = other.countOfEmployees;
    employee = new Employee*[employeesCapacity];
    for(int i = 0;i < countOfEmployees; i++)
    {
        this->employee[i] = other.employee[i];
    }
}

void DepartmentChef::destroy()
{
    for(int i = 0; i < employeesCapacity; i++)
    {
        delete[] employee[i];
    }
    delete[] employee;
    delete[] departmentInformation;
}

DepartmentChef::DepartmentChef() : Specialist()
{
    departmentInformation = nullptr;
    employeesCapacity = 0;
    countOfEmployees = 0;
    employee = new Employee*[employeesCapacity];
}


void DepartmentChef::addEmployee(Employee employee)
{
    if(countOfEmployees == employeesCapacity)
        resize(4);
    countOfEmployees++;
    //employee[countOfEmployees] = &employee;
}

void DepartmentChef::removeEmployee(int index)
{
    employee[index] = nullptr;
    for(int i = index + 1; i < countOfEmployees; i++)
    {
        employee[i-1] = employee[i];
    }
}
