#include <iostream>
using namespace std;

int main() {
    
    // while loop
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    cout << "\n";

    // do...while loop
    i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    cout << "\n";

    // break
    i = 0;
    while (i < 10) {
        cout << i << "\n";
        i++;
        if (i == 4) {
            break;
        }
    }
    cout << "\n";

    // continue
    i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
    cout << "\n";

    return 0;
}