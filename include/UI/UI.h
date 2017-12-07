#ifndef UI_H
#define UI_H

#include "Model.h"
#include "Services.h"

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
