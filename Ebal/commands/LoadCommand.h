//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_LOADCOMMAND_H
#define UNTITLED_LOADCOMMAND_H


#include "../fileWorker/FileManager.h"
#include "../collectionManager/BookshopListShell.h"
#include "ControlUnit.h"
#include "Command.h"

class LoadCommand : public Command {
private:
    FileManager *fileManager;
    BookshopListShell *bookshopListShell;
public:
    LoadCommand(FileManager *fileManager, ControlUnit *controlUnit, BookshopListShell *bookshopListShell ){
        this->fileManager = fileManager;
        this->bookshopListShell = bookshopListShell;
    }

    void execute(string args){
        fileManager->writeFromFile(bookshopListShell->getList());
    }

};


#endif //UNTITLED_LOADCOMMAND_H
