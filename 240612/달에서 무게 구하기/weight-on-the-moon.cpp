#include <iostream>

using namespace std;

int main() {

    float result = 13 * 0.165000;
    cout.precision(6);
    cout << "13 * 0.165000 = " << fixed << result;

    return 0;
}