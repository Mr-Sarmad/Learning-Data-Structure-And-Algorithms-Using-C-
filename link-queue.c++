#include <iostream>
using namespace std;
const int cap = 5;
int q[cap];
int rear = 0;
int front = 0;
bool isEmpty() {
    return (rear == front);
}
bool isFull() {
    return (rear == cap);
}
bool enqueue(int e) {
    if (isFull()) {
        cout << "Error: Queue is full" << endl;
        return false;
    }

    if (front != 0 || rear == cap) {
        for (int i = rear; i > 0; i--) {
            q[i] = q[i - 1];
        }
    } else {
        q[rear] = e;
    }
    rear++; 
    return true;
}

bool dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty" << endl;
        return false;
    } else {
        front++;
        return true;
    }
}

int frontElement() {
    if (!isEmpty()) {
        return q[front];
    } else {
        cout << "Error: Queue is empty" << endl;
        return -1;
    }
}

int rearElement() {
    if (isEmpty()) {
        cout << "Error: Queue is empty" << endl;
        return -1;
    } else {
        return q[rear - 1];
    }
}

void printRtoF() {
    for (int i = rear - 1; i >= 0; i--) {
        cout << i << ":" << q[i] << "   ";
    }
    cout << endl;
}

void printFtoR() {
    for (int i = front; i < rear; i++) {
        cout << i << ":" << q[i] << "   ";
    }
    cout << endl;
}

void display() {
    for (int i = front; i < rear; i++) {
        cout << q[i] << "   ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printFtoR();
    enqueue(40);
    printRtoF();
    cout << "Front element: " << frontElement() << endl;
    cout << "Rear element: " << rearElement() << endl;
    dequeue();
    enqueue(50);
    enqueue(60);
    dequeue();
    cout << "Front element: " << frontElement() << endl;
    cout << "Rear element: " << rearElement() << endl;
    dequeue();
    enqueue(60);
    printFtoR();
    dequeue();
    printRtoF();
}