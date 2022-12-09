#include <iostream>

using namespace std;

int euclides(int, int);

int main() {

    int x = 0, y = 0;

    cout << "input x: ";
    cin >> x;
    cout << endl;
    cout << "input y: ";
    cin >> y;
    cout << endl;

    cout << "greatest common divisor of " << x << " & " << y << " = " << euclides(x, y) << endl << endl;

    return 0;
}

int euclides(int x, int y) {
    if (y == 0) {
        return x;
    }
    else {
        return euclides(y, x % y);
    }
}