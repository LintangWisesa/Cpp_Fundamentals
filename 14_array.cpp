#include <iostream>
using namespace std;

int main() {
    // array[size]: array name[number of elements]
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};
    cout << cars[0] << "\n";
    cout << myNum[1] << "\n";

    cars[0] = "Mitsubishi";
    cout << cars[0] << "\n\n";

    // array & loop
    for(int i = 0; i < 4; i++) {
        cout << i << ". " << cars[i] << "\n";
    }

    return 0;
}