#include <iostream>
using namespace std;

int main() {
    string hello = "Hello", name = "Andy";

    cout << hello + " " + name + "\n";
    cout << hello.append(name);
    cout << hello.length();
    cout << hello.size();
    
    cout << hello[0];
    hello[0] = 'J';
    cout << hello;

    return 0;
}