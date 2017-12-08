#ifndef REPOSITORIES_H
#define REPOSITORIES_H

#include "Model.h"
#include <fstream>
#include <vector>
using namespace std;

class Repositories
{
    public:
        Repositories();
        void addSalaryRecord(const Model& model);
        vector<Model> searchSalaryRecord(char SSN[11]); // get data from file via input

    private:
};

#endif // REPOSITORIES_H
