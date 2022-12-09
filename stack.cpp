#include <iostream>

#define MAX 10

using namespace std;

int stack[MAX];
int top = -1;

int peek();
bool isFull();
bool isEmpty();
void push();
int pop();
void display();

int main() {

    int x = 0;

    cout << "(1) push\n";
    cout << "(2) pop\n";
    cout << "(3) display\n";
    cout << "(0) exit\n\n";

    do {
        cout << "select: ";
        cin >> x;

        switch (x) {
        case 0: cout << "\nexit\n";
            break;
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: display();
            break;
        default: cerr << "\nerror\n";
        }

        cout << endl;
    } while (x != 0);

    return 0;
}

int peek() {
    return stack[top];
}

bool isFull() {
    if (top == MAX - 1) {
        return true;
    }
    else {
        return false;
    }
}

bool isEmpty() {
    if (top == -1) {
        return true;
    }
    else {
        return false;
    }
}

void push() {
    int x;

    if (!isFull()) {
        cout << "input: ";
        cin >> x;
        top += 1;
        stack[top] = x;
    }
    else {
        cout << "\nstack full\n";
    }
}

int pop() {
    int x;

    if (!isEmpty()) {
        x = stack[top];
        top -= 1;
        cout << "popped: " << x << endl;
        return x;
    }
    else {
        cout << "\nstack empty\n";
    }
}

void display() {
    if (top == -1) {
        cout << "\nstack empty\n";
    }
    else {
        cout << "\ntop element: " << peek() << endl;
        cout << "elements:\n";

        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }

        cout << endl;
    }
}