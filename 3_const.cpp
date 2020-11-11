#include <iostream>
using namespace std;

// const can't be assigned new value

int main() {
    const int minutesPerHour = 60;
    const float PI = 3.14;
    int x = 2;

    x = 10;
    cout << x;
    return 0;
}