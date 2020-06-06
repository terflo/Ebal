cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ebal Ebal.cpp sourceClasses/BookShop.h commands/Command.cpp commands/Command.h commands/SaveCommand.h  commands/Command.cpp commands/SaveCommand.cpp commands/ControlUnit.cpp commands/ControlUnit.h commands/LoadCommand.cpp commands/LoadCommand.h commands/InfoCommand.cpp commands/InfoCommand.h Test/TestClass.cpp Test/TestClass.h commands/AddCommand.cpp commands/AddCommand.h factories/BookShopFactory.cpp factories/BookShopFactory.h sourceClasses/Book.cpp sourceClasses/BookShop.cpp)