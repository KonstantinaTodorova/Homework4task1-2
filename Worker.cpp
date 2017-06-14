#include "Worker.h"

void Worker::copy(const Worker& other)
{
    this->weeklySalary = other.weeklySalary;
    this->workHoursPerDay = other.workHoursPerDay;
}

Worker::Worker() :Human()
{
    weeklySalary = 0;
    workHoursPerDay = 0;
}
Worker::Worker(char* firstName, char* lastName, double weeklySalary, unsigned int workHoursPerDay) : Human(firstName, lastName)
{
    this->weeklySalary = weeklySalary;
    this->workHoursPerDay = workHoursPerDay;
}

Worker::Worker(const Worker& other)
{
    copy(other);
}

Worker& Worker::operator=(const Worker& other)
{
    if (this != &other)
    {
        Human::operator=(other);
        copy(other);
    }
    return *this;
}


double Worker::getWeeklySalary() const
{
    return this->weeklySalary;
}

unsigned int Worker::getWorkHoursPerDay() const
{
    return this->workHoursPerDay;
}

void Worker::setWeeklySalary(double)
{
    this->weeklySalary = weeklySalary;
}

void Worker::setWorkHoursPerDay(unsigned int)
{
    this->workHoursPerDay = workHoursPerDay;
}

double Worker::moneyPerHour()
{
    return weeklySalary/(5*workHoursPerDay);
}
