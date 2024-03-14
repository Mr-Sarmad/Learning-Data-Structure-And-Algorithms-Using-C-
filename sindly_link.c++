#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *head = NULL;

void insertatfront(int a) {
    node *temp = new node;
    if (head == NULL) {
        head = temp;
        temp->data = a;
        temp->next = NULL;
    } else {
        temp->next = head;
        head = temp;
        temp->data = a;
    }
}

void insertatend(int y) {
    node *temp = new node;
    temp->data = y;
    temp->next = NULL;
    node *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void insertatnthposition() {
    node *temp = new node;
    int p;
    int z;
    cout << "enter position on which you insert" << endl;
    cin >> p;
    cout << "enter data which insert into node" << endl;
    cin >> z;
    temp->data = z;
    if (p == 1) {
        temp->next = head;
        head = temp;
    } else {
        node *ptr = head;
        for (int i = 1; i < p - 1; i++) {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

bool remove(int a) {
    node *temp = head;
    node *prev = NULL;
    while (temp != NULL && temp->data != a) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "link list is empty or data not found" << endl;
        return false;
    }
    if (head == temp) {
        head = head->next;
        temp--;
    } else {
        prev->next = temp->next;
        temp--;
    }
    return true;
}

void display() {
    node *temp = head;
    while (temp != NULL) {
        cout <<temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    insertatfront(23);
    insertatfront(24);

    display();
    
    return 0;
}