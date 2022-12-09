#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));

    int arr[100];
    int arr_even[100];

    cout << "array = ";

    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100 + 1;
        arr_even[i] = 0;
        cout << arr[i] << " ";
    }

    int k = 0;

    for (int i = 0; i < 100; i++) {
        if (arr[i] % 2 == 0) {
            arr_even[k] = arr[i];
            k++;
        }
    }

    k = 0;

    cout << "\n\narray of even numbers = ";

    while (arr_even[k] != 0) {
        cout << arr_even[k] << " ";
        k++;
    }

    cout << endl << endl;

    return 0;
}