#include<iostream>

using namespace std;

void eratostenes(bool *, int);

int main() {

	int n;
	bool *arr;

	cout << "max number: ";
	cin >> n;
	cout << endl;

	arr = new bool[n + 1];

	for (int i = 2; i <= n; i++) {
		arr[i] = 0;
	}

	eratostenes(arr, n);

	cout << "prime numbers: ";

	for (int i = 2; i <= n; i++) {
		if (!arr[i]) {
			cout << i << " ";
		}
	}

	cout << endl << endl;

	delete[] arr;

	return 0;
}

void eratostenes(bool *arr, int n) {
	for (int i = 2; (i * i) <= n; i++){
		if (!arr[i]) {
			for (int j = i * i; j <= n; j += i) {
				arr[j] = 1;
			}
		}
	}
}