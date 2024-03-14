#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* top = NULL;
int s = 0;
const int cap=5;
void push(int a) {
    if (s>=cap) {
        cout<<"Error overflow"<<endl;
    }
    else{
    Node* temp=new Node;
    temp->data=a;
    temp->next=top;
    top=temp;
    s++;}
}

void pop() {
    if (s>0) {
        Node* temp=top;
        top=top->next;
        temp--;
        s--;
    } else {
        cout<<"Error overflow"<<endl;
    }
}

int topElement() {
    if (s>0) {
        return top->data;
    } else {
        cout << "Error";
        return -1;
    }
}

void printTopToBottom() {
    Node* temp=top;
    for (int i=0; i<s; i++) {
        cout<<temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    cout << topElement() << endl;
    push(40);
    printTopToBottom();
    pop();
    push(50);
    cout << topElement() << endl;
    push(60);
    push(70);
    pop();
    printTopToBottom();
    return 0;
}