#pragma once

#include <Human.h>


class Worker : public Human
{
    public:
        Worker();
        Worker(char*, char*, double, unsigned int);
        Worker(const Worker& other);
        Worker& operator=(const Worker& other);

        double getWeeklySalary() const;
        unsigned int getWorkHoursPerDay() const;

        void setWeeklySalary(double);
        void setWorkHoursPerDay(unsigned int);

        double moneyPerHour();


    private:
        double weeklySalary;
        unsigned int workHoursPerDay;

        void copy(const Worker& other);

};
