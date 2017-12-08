#ifndef GENERICERROR_H
#define GENERICERROR_H

#include "Model.h"
#include <fstream>
#include <vector>


class genericError
{
    public:
        genericError(std::string message);
        std::string GetMessage();

    private:
        std::string message;
};

#endif // REPOSITORIES_H
