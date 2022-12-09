#include <iostream>

using namespace std;

unsigned long int fibonacci(unsigned long int);

int main() {

    unsigned long int n = 0;
    cout << "input number: ";
    cin >> n;
    cout << "\nfibonacci of " << n << " = " << fibonacci(n) << endl << endl;

    return 0;
}

unsigned long int fibonacci(unsigned long int n) {
    if (n < 1) {
        return 0;
    }
    else if (n < 2) {
        return 1;
    }
    else {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}