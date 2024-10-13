
### <span style="color: lightblue;">Compiling several files at once with Cmake and Make</span>

_Let's assume we're compiling a program that has the following files:_

{main.c, foo.c, foo.h}

_And we want to build the program {myProgram}_

#### USING CMAKE:

1. Create a CMakeLists.txt in the project directory with the following:
```
cmake_minimum_required(VERSION 3.10)

project(myProgram)

add_executable(myProgram main.c foo.c)
```

2. Create a build directory in the project directory to store the build files. Enter that directory.

3. Run cmake to generate the build files:
```
cmake ..
```

4. Build the executable using make:
```
make
```
5. Run the executable:
```
./myProgram
```
---
#### USING MAKE:

1. Create a Makefile in the project directory with the following content:
```
CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: myProgram

myProgram: main.o foo.o
    $(CC) $(CFLAGS) -o myProgram main.o foo.o

main.o: main.c foo.h
    $(CC) $(CFLAGS) -c main.c

foo.o: foo.c foo.h
    $(CC) $(CFLAGS) -c foo.c

clean:
    rm -f myProgram main.o foo.o
```

2. Run make to build the project:
```
make
```

3. Run the executable:
```
./myProgram
```
---

_Notes:_

_Ensure that the Makefile uses tabs for indentation, and not spaces_
_'make clean' will remove the specified files. We can create a build directory, like with cmake, to make sure that the files created are there, and the originals remain untouched_