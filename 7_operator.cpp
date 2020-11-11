#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // arithmetic operator
    cout << x + 2 << "\n";
    cout << x - 2 << "\n";
    cout << x * 2 << "\n";
    cout << x / 2 << "\n";
    cout << x % 2 << "\n";

    // increment decrement by 1
    --x;
    x--;
    cout << x << "\n";
    ++x;
    x++;
    cout << x << "\n";

    // assignment operator  =  +=  -=  *=  /=  %=
    x += 10;
    cout << x << "\n";
    x -= 5;
    cout << x << "\n";

    // comparison operator  ==  !=  >  >=  <  <=
    int a = 10;
    cout << (a == 15) << "\n";
    cout << (a > 100) << "\n";
    cout << (a < 100) << "\n";

    // logical operator
    int b = 12;
    cout << (b < 15 && b > 10) << "\n";
    cout << (b < 15 || b > 100) << "\n";
    cout << !(b < 15 && b > 10) << "\n";

    return 0;
}