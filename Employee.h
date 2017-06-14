#pragma once
#include <cstring>

enum Department
{
    None,
    PM,
    QM,
    QA,
    SA,
    KE,
    DE,
    RS,
    SAdm
};

class Employee
{
    public:
        Employee();
        ~Employee();
        Employee(char*, char*, Department, double);
        Employee(const Employee& other);
        Employee& operator=(const Employee& other);



        const char* getEmployeeName() const;
        const char* getEmployeeAddress() const;
        Department getEmployeeDepartment() const;
        double getEmployeeSalary() const;

        void setEmployeeName(char*);
        void setEmployeeAddress(char*);
        void setEmployeeDepartment(Department);
        void setEmployeeSalary(double);

    protected:
        char* employeeName;
        char* employeeAddress;
        Department employeeDepartment;
        double employeeSalary;


    private:

        void copy(const Employee& other);
        void destroy();
};



