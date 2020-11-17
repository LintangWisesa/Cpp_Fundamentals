#include <iostream>
using namespace std;

int main() {

    // basic if else statement
    int time = 22;
    if (time < 10) {
        cout << "Good morning\n";
    } else if (time < 20) {
        cout << "Good day\n";
    } else {
        cout << "Good evening\n";
    }

    // shorthand: 1 line if statement 
    time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
}