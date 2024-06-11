#include <iostream>

using namespace std;

int main() {
    
    int a = 9;
    float b = 358.273;
    float result = a * b;
    cout.precision(3);
    cout << a << " * " << fixed << b << " = " << result;

    return 0;
}