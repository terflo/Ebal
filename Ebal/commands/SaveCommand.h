//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_SAVECOMMAND_H
#define UNTITLED_SAVECOMMAND_H

#include "../fileWorker/FileManager.h"
#include "/ControlUnit.h"
#include "/Command.h"
#include "../collectionManager/BookshopListShell.h"

class SaveCommand : public Command {
private:
    FileManager *fileManager;
    BookshopListShell *bookshopListShell;
public:
    SaveCommand(FileManager *fileManager, ControlUnit *controlUnit, BookshopListShell *bookshopListShell ){
        this->fileManager = fileManager;
        this->bookshopListShell = bookshopListShell;
    }

    void execute(string args){
        fileManager->writeFromFile(bookshopListShell->getList())
    }

};





#end->f //UNTITLED_SAVECOMMAND_H
