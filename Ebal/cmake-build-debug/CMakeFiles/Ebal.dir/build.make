# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = A:\C++Proj\DanProj\Ebal\Ebal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Ebal.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Ebal.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Ebal.dir\flags.make

CMakeFiles\Ebal.dir\Ebal.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\Ebal.cpp.obj: ..\Ebal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ebal.dir/Ebal.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\Ebal.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\Ebal.cpp
<<

CMakeFiles\Ebal.dir\Ebal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/Ebal.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\Ebal.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\Ebal.cpp
<<

CMakeFiles\Ebal.dir\Ebal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/Ebal.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\Ebal.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\Ebal.cpp
<<

CMakeFiles\Ebal.dir\commands\Command.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\commands\Command.cpp.obj: ..\commands\Command.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ebal.dir/commands/Command.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\commands\Command.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\commands\Command.cpp
<<

CMakeFiles\Ebal.dir\commands\Command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/commands/Command.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\commands\Command.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\commands\Command.cpp
<<

CMakeFiles\Ebal.dir\commands\Command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/commands/Command.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\commands\Command.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\commands\Command.cpp
<<

CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.obj: ..\commands\SaveCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Ebal.dir/commands/SaveCommand.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\commands\SaveCommand.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\commands\SaveCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/commands/SaveCommand.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\commands\SaveCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/commands/SaveCommand.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\commands\SaveCommand.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\commands\SaveCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.obj: ..\commands\ControlUnit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Ebal.dir/commands/ControlUnit.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\commands\ControlUnit.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\commands\ControlUnit.cpp
<<

CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/commands/ControlUnit.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\commands\ControlUnit.cpp
<<

CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/commands/ControlUnit.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\commands\ControlUnit.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\commands\ControlUnit.cpp
<<

CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.obj: ..\commands\LoadCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Ebal.dir/commands/LoadCommand.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\commands\LoadCommand.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\commands\LoadCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/commands/LoadCommand.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\commands\LoadCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/commands/LoadCommand.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\commands\LoadCommand.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\commands\LoadCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.obj: ..\commands\InfoCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Ebal.dir/commands/InfoCommand.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\commands\InfoCommand.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\commands\InfoCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/commands/InfoCommand.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\commands\InfoCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/commands/InfoCommand.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\commands\InfoCommand.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\commands\InfoCommand.cpp
<<

CMakeFiles\Ebal.dir\Test\TestClass.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\Test\TestClass.cpp.obj: ..\Test\TestClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Ebal.dir/Test/TestClass.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\Test\TestClass.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\Test\TestClass.cpp
<<

CMakeFiles\Ebal.dir\Test\TestClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/Test/TestClass.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\Test\TestClass.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\Test\TestClass.cpp
<<

CMakeFiles\Ebal.dir\Test\TestClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/Test/TestClass.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\Test\TestClass.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\Test\TestClass.cpp
<<

CMakeFiles\Ebal.dir\commands\AddCommand.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\commands\AddCommand.cpp.obj: ..\commands\AddCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Ebal.dir/commands/AddCommand.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\commands\AddCommand.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\commands\AddCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\AddCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/commands/AddCommand.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\commands\AddCommand.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\commands\AddCommand.cpp
<<

CMakeFiles\Ebal.dir\commands\AddCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/commands/AddCommand.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\commands\AddCommand.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\commands\AddCommand.cpp
<<

CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.obj: ..\factories\BookShopFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Ebal.dir/factories/BookShopFactory.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\factories\BookShopFactory.cpp
<<

CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/factories/BookShopFactory.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\factories\BookShopFactory.cpp
<<

CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/factories/BookShopFactory.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\factories\BookShopFactory.cpp
<<

CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.obj: ..\sourceClasses\Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Ebal.dir/sourceClasses/Book.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\sourceClasses\Book.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\sourceClasses\Book.cpp
<<

CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/sourceClasses/Book.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\sourceClasses\Book.cpp
<<

CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/sourceClasses/Book.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\sourceClasses\Book.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\sourceClasses\Book.cpp
<<

CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.obj: CMakeFiles\Ebal.dir\flags.make
CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.obj: ..\sourceClasses\BookShop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Ebal.dir/sourceClasses/BookShop.cpp.obj"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.obj /FdCMakeFiles\Ebal.dir\ /FS -c A:\C++Proj\DanProj\Ebal\Ebal\sourceClasses\BookShop.cpp
<<

CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ebal.dir/sourceClasses/BookShop.cpp.i"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe > CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E A:\C++Proj\DanProj\Ebal\Ebal\sourceClasses\BookShop.cpp
<<

CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ebal.dir/sourceClasses/BookShop.cpp.s"
	A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.s /c A:\C++Proj\DanProj\Ebal\Ebal\sourceClasses\BookShop.cpp
<<

# Object files for target Ebal
Ebal_OBJECTS = \
"CMakeFiles\Ebal.dir\Ebal.cpp.obj" \
"CMakeFiles\Ebal.dir\commands\Command.cpp.obj" \
"CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.obj" \
"CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.obj" \
"CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.obj" \
"CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.obj" \
"CMakeFiles\Ebal.dir\Test\TestClass.cpp.obj" \
"CMakeFiles\Ebal.dir\commands\AddCommand.cpp.obj" \
"CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.obj" \
"CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.obj" \
"CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.obj"

# External object files for target Ebal
Ebal_EXTERNAL_OBJECTS =

Ebal.exe: CMakeFiles\Ebal.dir\Ebal.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\commands\Command.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\commands\SaveCommand.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\commands\ControlUnit.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\commands\LoadCommand.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\commands\InfoCommand.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\Test\TestClass.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\commands\AddCommand.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\factories\BookShopFactory.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\sourceClasses\Book.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\sourceClasses\BookShop.cpp.obj
Ebal.exe: CMakeFiles\Ebal.dir\build.make
Ebal.exe: CMakeFiles\Ebal.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Ebal.exe"
	"C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Ebal.dir --rc="A:\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="A:\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests  -- A:\VS\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Ebal.dir\objects1.rsp @<<
 /out:Ebal.exe /implib:Ebal.lib /pdb:A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\Ebal.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Ebal.dir\build: Ebal.exe

.PHONY : CMakeFiles\Ebal.dir\build

CMakeFiles\Ebal.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ebal.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Ebal.dir\clean

CMakeFiles\Ebal.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" A:\C++Proj\DanProj\Ebal\Ebal A:\C++Proj\DanProj\Ebal\Ebal A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug A:\C++Proj\DanProj\Ebal\Ebal\cmake-build-debug\CMakeFiles\Ebal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Ebal.dir\depend

