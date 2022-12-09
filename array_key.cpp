#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));

    int arr[100];
    int k = 0;
    
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 50 + 1;
    }

    cout << "input key: ";
    cin >> k;

    int j = 0;

    while (arr[j] != k && j < 100) {
        j++;
    }

    if (arr[j] == k) {
        cout << "\nkey found in arr[" << j << "]\n";
    }
    else {
        cout << "\nkey not found\n";
    }

    return 0;
}