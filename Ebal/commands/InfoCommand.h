//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_INFOCOMMAND_H
#define UNTITLED_INFOCOMMAND_H


#include "Command.h"
#include "../collectionManager/BookshopListShell.h"
#include "ControlUnit.h"

class InfoCommand : public Command{
private:
    BookshopListShell *bookshopListShell;
public:
    InfoCommand(BookshopListShell *bookshopListShell, ControlUnit *controlUnit){
        this->bookshopListShell = bookshopListShell;
    }
    void execute(string args){
        bookshopListShell->info();
    }

};


#endif //UNTITLED_INFOCOMMAND_H
