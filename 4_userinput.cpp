#include <iostream>
using namespace std;

int main() {
    int x, y;
    int sum;
    
    cout << "Type 1st number: ";
    cin >> x;
    cout << "Type 2nd number: ";
    cin >> y;
    
    sum = x + y;
    cout << x << " + " << y << " = " << sum;
    return 0;
}