//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_CONTROLUNIT_H
#define UNTITLED_CONTROLUNIT_H

#include <map>
#include <string>
#include "Command.h"

using namespace std;

class ControlUnit {
private:
    map <string, Command > commandMap;
public:
    void addNewCommand(string commandName, Command command){
        commandMap.insert(make_pair(commandName,command));
    }
    void executeMethod(string name, string args){
        commandMap.find(name)->second.execute(args);
    }

};


#endif //UNTITLED_CONTROLUNIT_H
