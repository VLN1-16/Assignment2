#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <iostream>

using namespace std;

class Model
{
    public:
        Model(string employeeName, string SSN, int employeeSalary, int month, int year);
        string getEmployeeName();
        string getSSN();
        int getYear();
        int getMonth();
        int getEmployeeSalary();

        friend ostream& operator <<(ostream& out, const Model& model);

    private:
        string employeeName;
        string SSN;
        int year;
        int month;
        int employeeSalary;
};

#endif // MODEL_H
