#pragma once
#include "DepartmentChef.h"
#include "Secretary.h"

class Director
{
    public:
        Director();
        ~Director();

        void addEmployee(Employee employee);
        void removeEmployee(int indexFiredEmployee);

        void getTotalPayment();

    private:
        Secretary secretary;
        Employee** employee;

        int employeesCapacity;
        int countOfEmployees;

        void resize(int);
        void copy(const Director& other);
        void destroy();

};
