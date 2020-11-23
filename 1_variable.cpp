// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false

#include <iostream>
using namespace std;

int main() {
    int myNum = 15;
    float myFloatNum = 5.99;
    double myDoubleNum = 5.99;
    char myLetter = 'D';
    string myText = "Hello"; 
    bool myBoolean = true;

    cout << myNum << '\n' << myFloatNum << '\n' << myDoubleNum << '\n' << myLetter << '\n' << myText << '\n' << myBoolean << '\n';
    
    // references
    string food = "Pizza";
    string &meal = food;
    cout << meal << '\n';

    // & symbol can be used to get memory address
    // When a variable is created in C++, a memory address is assigned to the variable. 
    // And when we assign a value to the variable, it is stored in this memory address.
    // The memory address is in hexadecimal form (0x..)
    
    cout << &food;
    return 0;
}