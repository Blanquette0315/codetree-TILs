#include <iostream>

using namespace std;

int main() {
    
    float ft = 9.2f, mi = 1.3f;

    cout.precision(1);
    cout << fixed << ft << "ft = " << ft * 30.48 << "cm" << endl;
    cout << mi << "mi = " << mi * 160934 << "cm";

    return 0;
}