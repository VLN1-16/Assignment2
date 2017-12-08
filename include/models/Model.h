#ifndef MODEL_H
#define MODEL_H

#include <iostream>

using namespace std;

class Model
{
    public:
        Model();
        Model(char employeeName[150], char SSN[11], int employeeSalary, int month, int year);
        string getEmployeeName();
        string getSSN();
        int getYear();
        int getMonth();
        int getEmployeeSalary();
        bool compareSSN(char SSN[10]);
        void print(ostream& out);
        friend ostream& operator <<(ostream& out, const Model& model);
        friend istream& operator >>(istream& is, Model& model);
    private:
        char employeeName[150];
        char SSN[11]; 
        int year;
        int month;
        int employeeSalary;
};

#endif // MODEL_H
