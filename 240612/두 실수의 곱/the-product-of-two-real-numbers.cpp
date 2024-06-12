#include <iostream>

using namespace std;

int main() {
    
    float a = 5.26f, b = 8.27f;
    cout.precision(3);
    cout << fixed << a*b;

    return 0;
}