#include <iostream>
using namespace std;
#include <cmath> // include math library

int main() {
    // no need <cmath>
    cout << max(5, 10);
    cout << "\n";
    cout << min(5, 10);
    cout << "\n";

    // from <cmath>
    cout << fmax(5, 10);
    cout << "\n";
    cout << fmin(5, 10);
    cout << "\n";

    cout << abs(-123.456);
    cout << "\n";
    cout << sqrt(16);
    cout << "\n";
    cout << cbrt(64);
    cout << "\n";
    cout << pow(3,3);
    cout << "\n";

    cout << round(2.698);
    cout << "\n";
    cout << ceil(2.698);
    cout << "\n";
    cout << floor(2.698);
    cout << "\n";

    cout << sin(90 * 3.14 / 180); // in radian! r = degree * pi / 180
    cout << "\n";
    cout << log(2.71828); // basis e (euler) = 2.71828
    cout << "\n";
    return 0;
}