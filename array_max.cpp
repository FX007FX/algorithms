#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));

    int arr[100];

    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100 + 1;
    }

    int j = 0;
    int temp = 0;

    while (j < 100) {
        if (arr[j] > temp) {
            temp = arr[j];
        }

        j++;
    }

    cout << "arr[] max = " << temp << endl;

    return 0;
}