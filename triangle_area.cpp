#include <iostream>
#include <math.h>

using namespace std;

float triangle(float, float);
float triangle(float, float, float);

int main() {

    float a = 0, b = 0, c = 0, h = 0;
    int q = 0;
    
    cout << "(0) input a,h\n(1) input a,b,c\n select method: ";
    cin >> q;

    if (q == 0) {
        cout << "\ninput a: ";
        cin >> a;
        cout << "input h: ";
        cin >> h;
        cout << "\narea = " << triangle(a, h) << endl;
    }
    else if (q == 1) {
        cout << "\ninput a: ";
        cin >> a;
        cout << "input b: ";
        cin >> b;
        cout << "input c: ";
        cin >> c;
        cout << "\narea = " << triangle(a, b, c) << endl;
    }
    else {
        cerr << "\nerror\n";
    }

    return 0;
}

float triangle(float a, float h) {
    return (a * h) / 2;
}

float triangle(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return pow(s * (s - a) * (s - b) * (s - c), 0.5);
}