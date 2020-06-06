//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_ADDCOMMAND_H
#define UNTITLED_ADDCOMMAND_H


#include "../collectionManager/BookshopListShell.h"
#include "Command.h"
#include "ControlUnit.h"

class AddCommand : public Command {
private:
    BookshopListShell *bookshopListShell;
public:
    AddCommand(BookshopListShell *bookshopListShell, ControlUnit *controlUnit){
        this->bookshopListShell = bookshopListShell;
    }

    void execute(string args){

    }


};


#endif //UNTITLED_ADDCOMMAND_H
