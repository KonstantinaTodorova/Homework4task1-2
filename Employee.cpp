#include "Employee.h"



void Employee::copy(const Employee& other)
{
    this->employeeName = new char[strlen(other.getEmployeeName()) + 1];
    strcpy(this->employeeName, other.employeeName);
    this->employeeAddress = new char[strlen(other.getEmployeeAddress()) + 1];
    strcpy(this->employeeAddress, other.employeeAddress);
    this->employeeDepartment = other.employeeDepartment;
    this->employeeSalary = other.employeeSalary;
}

void Employee::destroy()
{
    delete[] this->employeeName;
    delete[] this->employeeAddress;
}


Employee::Employee()
{
    employeeName = nullptr;
    employeeAddress = nullptr;
    employeeDepartment = None;
    employeeSalary = 0;
}

Employee::~Employee()
{
    destroy();
}

Employee::Employee(char* employeeName, char* employeeAddress, Department employeeDepartment, double employeeSalary)
{
    setEmployeeName(employeeName);
    setEmployeeAddress(employeeAddress);
    setEmployeeDepartment(employeeDepartment);
    setEmployeeSalary(employeeSalary);
}

Employee::Employee(const Employee& other)
{
    copy(other);
}

Employee& Employee::operator=(const Employee& other)
{
    if(this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}

const char* Employee::getEmployeeName() const
{
    return this->employeeName;
}
const char* Employee::getEmployeeAddress() const
{
    return this->employeeAddress;
}
Department Employee::getEmployeeDepartment() const
{
    return this->employeeDepartment;
}
double Employee::getEmployeeSalary() const
{
    return this->employeeSalary;
}


void Employee::setEmployeeName(char*)
{
    delete[] this->employeeName;
    this->employeeName = new char[strlen(employeeName) + 1];
    strcpy(this->employeeName, employeeName);
}
void Employee::setEmployeeAddress(char*)
{
    delete[] this->employeeAddress;
    this->employeeAddress = new char[strlen(employeeAddress) + 1];
    strcpy(this->employeeAddress, employeeAddress);
}
void Employee::setEmployeeDepartment(Department)
{
    this->employeeDepartment = employeeDepartment;
}
void Employee::setEmployeeSalary(double)
{
    this->employeeSalary = employeeSalary;
}




