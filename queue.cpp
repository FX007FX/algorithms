#include <iostream>

#define MAX 10

using namespace std;

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();

int main() {

    int x = 0;

    cout << "(1) enqueue\n";
    cout << "(2) dequeue\n";
    cout << "(3) display\n";
    cout << "(0) exit\n\n";

    do {
        cout << "select: ";
        cin >> x;

        switch (x) {
            case 0: cout << "\nexit\n";
                break;
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            default: cerr << "\nerror\n";
        }

        cout << endl;
    } while (x != 0);

    return 0;
}

void enqueue() {
    int x;

    if (rear == MAX - 1) {
        cout << "\nqueue full\n";
    }
    else {
        if (front == -1) {
            front = 0;
        }

        cout << "input: ";
        cin >> x;
        rear += 1;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "queue empty";
    }
    else {
        cout << "dequeued: " << queue[front] << endl;
        front += 1;
    }
}

void display() {
    if (front == -1) {
        cout << "\nqueue empty\n";
    }
    else {
        cout << "\nelements: ";

        for (int i = rear; i >= front; i--) {
            cout << queue[i] << " ";
        }

        cout << endl << endl;
    }
}