#include "Director.h"


void Director::resize(int newSize)
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

void Director::copy(const Director& other)
{
    secretary = other.secretary;
    destroy();
    this->employeesCapacity = other.employeesCapacity;
    this->countOfEmployees = other.countOfEmployees;
    employee = new Employee*[employeesCapacity];
    for(int i = 0;i < countOfEmployees; i++)
    {
        this->employee[i] = other.employee[i];
    }
}


void Director::destroy()
{
    for(int i = 0; i < employeesCapacity; i++)
    {
        delete[] employee[i];
    }
    delete[] employee;
}

Director::Director()
{
    employeesCapacity = 0;
    countOfEmployees = 0;
    employee = new Employee*[employeesCapacity];
}

Director::~Director()
{
    destroy();
}

void Director::getTotalPayment()
{
    double totalPayment;
    for (int i = 0; i < countOfEmployees; ++i)
    {
        totalPayment += employee[i]->getEmployeeSalary();
    }
    std::cout << totalPayment << std::endl;
}
