#pragma once
#include <Specialist.h>


class DepartmentChef : public Specialist
{
    public:
        DepartmentChef();
        ~DepartmentChef();

        void addEmployee(Employee employee);
        void removeEmployee(int index);



    private:
        char* departmentInformation;
        int employeesCapacity;

        Employee** employee;
        int countOfEmployees;


        void resize(int newSize);
        void copy(const DepartmentChef& other);
        void destroy();
};
