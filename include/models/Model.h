#ifndef MODEL_H
#define MODEL_H

#include <iostream>

using namespace std;

class Model
{
    public:
        Model();
        Model(char employeeName[150], char SSN[11], int employeeSalary, int month, int year);
        char* getEmployeeName();
        char* getSSN();
        int getYear();
        int getMonth();
        int getEmployeeSalary();
        void setName(const char n[150]);
        void setSSN(const char ssn[11]);
        bool compareSSN(char SSN[11]);
        void print(ostream& out);
        //Model& operator=(const Model& from);
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
