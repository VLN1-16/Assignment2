#ifndef REPOSITORIES_H
#define REPOSITORIES_H

#include "Model.h"
#include <fstream>

class Repositories
{
    public:
        Repositories();
        void addSalaryRecord(const Model& model);
        void searchSalaryRecord(); // get data from file via input

    private:
};

#endif // REPOSITORIES_H
