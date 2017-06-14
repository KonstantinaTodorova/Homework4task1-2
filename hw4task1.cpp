#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Worker.h"

using namespace std;

int main()
{
    //Test:

    Student a("Elisa", "Dominic", 5.30);
    cout << "The student's name is :" << a.getFirstName() << endl;
    cout << a.getLastName() << endl;
    cout << "Her grade is : " << a.getStudentGrade()<< endl;
    Worker b("Maria", "Todorova", 165, 8);
    cout << "The worker's name is: " << b.getFirstName() << endl;
    cout << b.getLastName() << endl;
    cout << "Her weekly salary is " << b.getWeeklySalary() << " and she works   "
    << b.getWorkHoursPerDay() << "   hours per day." << endl;




    return 0;
}
