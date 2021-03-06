#ifndef UI_H
#define UI_H

#include "Model.h"
#include "Services.h"
#include "InvalidName.h"
#include "InvalidSSN.h"
#include "InvalidSalery.h"
#include "genericError.h"
class UI
{
    public:
        UI();
        void mainMenu(); //Displaying main menu on screen

    private:
        void validateUserInput(char input); //to check if input is valid
        Model createNewRecord();
        Services modelService;
};

#endif // UI_H
