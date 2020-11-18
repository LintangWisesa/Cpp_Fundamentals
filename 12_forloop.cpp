#include <iostream>
using namespace std;

int main() {

    // for loop i++
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
    cout << "\n";

    // for loop i+=2
    for (int i = 0; i <= 10; i+=2) {
        cout << i << "\n";
    }
    cout << "\n";

    // break
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
       cout << i << "\n";
    }
    cout << "\n";

    // continue
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        continue;
    }
       cout << i << "\n";
    }
    cout << "\n";


    return 0;
}