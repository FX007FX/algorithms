#include <iostream>
#include <time.h>

using namespace std;

unsigned long long int factorial_recursive(unsigned long long int);
unsigned long long int factorial_iterative(unsigned long long int);

int main() {

    clock_t begin, end;
    double time;
    unsigned long long int n = 0;

    cout << "input number: ";
    cin >> n;
    cout << endl;

    begin = clock();
    cout << "factorial recursive:\n" << n << "! = " << factorial_recursive(n);
    end = clock();
    time = (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "\n time: " << time << endl << endl;

    begin = clock();
    cout << "factorial iterative:\n" << n << "! = " << factorial_iterative(n);
    end = clock();
    time = (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "\n time: " << time << endl << endl;

    return 0;
}

unsigned long long int factorial_recursive(unsigned long long int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial_recursive(n - 1);
    }
}

unsigned long long int factorial_iterative(unsigned long long int n) {
    unsigned long long int ret = 1;

    for (int i = 1; i <= n; i++) {
        ret *= i;
    }

    return ret;
}