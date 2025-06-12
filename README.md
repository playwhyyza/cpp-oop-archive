# cpp-oop-archive
C++ codes I wrote back in university while learning Object-Oriented Programming. This repo includes assignments, practice exercises, and small projects that helped me understand OOP concepts.

🛠️ How to Compile C++ Code

This repository contains C++ source code written for Object-Oriented Programming (OOP) practice. You can compile and run the code using a C++ compiler on Windows or Linux.
🔧 Windows
Option 1: Using g++ (MinGW)

    1. Install MinGW (if not installed).

    2. Add g++ to your system PATH.

    3. Open Command Prompt and run:

`g++ -o program_name filename.cpp
./program_name`

📌 Example:

`g++ -o myapp main.cpp
./myapp`

Option 2: Using Visual Studio Developer Command Prompt

    1. Open "x64 Native Tools Command Prompt for VS"

    2. Compile with:

`cl /EHsc filename.cpp`

🐧 Linux

    Open a terminal.

    Make sure g++ is installed:

sudo apt update
sudo apt install g++

    Compile and run:

`g++ -o program_name filename.cpp
./program_name`

📌 Example:

`g++ -o myapp main.cpp
./myapp`

📁 Multiple Files Example

If your program consists of multiple .cpp files:

`g++ -o program_name main.cpp class1.cpp class2.cpp
./program_name`