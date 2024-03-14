#include<iostream>
using namespace std;
const int cap=5;
int rear=0;
int front=0;
int q[cap];
bool isempty()
{
    if(front==rear)
    return true;
    else
    return false;

}
bool isfull()
{
    if(rear==cap && front==0)
    return true;
    else 
    return false;

}
bool enqueue(int e)
{
    if(isfull()){
    cout<<"error overflow"<<endl;
    return false;
    }
    else
    {
    if( front!=0 && rear==cap)
     {
        int to=0; 
        for(int i=front;i<rear;i++)
        {
        q[to]=q[i];
        to++;
        }
        rear=to;
        front=0; 
     }
    }
    q[rear]=e;
    rear++;
    return true; 
}
bool dequeue()
{
    if(isempty())
    {
    cout<<"error:under flow"<<endl;
    return false;
    }
    else
        front++;
        return true;
}
int rearelement()
{
    if(isempty()){
    cout<<"error:under flow";
    return -1;}
    else
    {
    return q[rear-1];
    }
}
int frontelement()
{
    if(isempty()){
    cout<<"error:under flow";
    return -1;
    }
    else
    return q[front];
}
void printftr()
{
    if(isempty())
    cout<<"error;under flow";
    else
    for(int i=front;i<rear;i++)
    cout<<q[i]<<" ";
    cout<<endl;
}
void printrtf()
{
if(isempty())
cout<<"error underflow";
else 
for(int i=rear-1;i>=front;i--)
cout<<q[i]<<" ";
cout<<endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printftr();  
    enqueue(40);
    printrtf();
    cout<<frontelement()<<endl;
    cout<<rearelement()<<endl;
    enqueue(50);
    enqueue(60);
    dequeue();
    cout<<frontelement()<<endl;
    cout<<rearelement()<<endl;
    dequeue();
    enqueue(60);
    printftr();
    dequeue();
    printrtf();
    return 0;
}
#include <iostream>
using namespace std;

const int cap=5;
int q[cap];
int rear=0;

bool isEmpty(){
    return rear==0;
}

bool isFull() {
    return rear==cap;
}

bool enqueue(int e){
    if (isFull()){
        cout << "Queue overflow\n";
        return false;
    } else {
        q[rear]=e;
        rear++;
        return true;
    }
}
bool dequeue() {
    if (isEmpty()){
        cout << "Error: Queue is empty" << endl;
        return false;
    } else {
        int frontElement = q[0];
        for (int i=0; i<rear-1; i++) {
            q[i] = q[i+1];
        }
        rear--;
        return true;
    }
}

int frontElement(){
    if (!isEmpty()){
        return q[0];
    } else {
        cout << "Error: Queue is empty" << endl;
        return -1;
    }
}
void display(){
    for (int i=0; i<rear; i++)
    {
        cout<<q[i];
    }
    cout<<endl;
}
int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    dequeue();
    cout<<frontElement()<<endl;
    display();
}
// #include <iostream>
// using namespace std;

// const int cap=5;
// int q[cap];
// int rear=0;
// int front=0;
// bool isEmpty(){
//     if(rear==front)
//     return true;
//     else 
//     return false;
// }

// bool isFull() {
//     if(rear==cap||front==0)
//     return true;
//     else 
//     return false;
// }

// bool enqueue(int e){
//     if (rear == cap) {
//         return false;
//     }

//     if (front != 0) {
//         for (int i = rear; i > 0; i--) {
//             q[i] = q[i - 1];
//         }
//         rear++;
//     }
//     else
//         q[front] = e;
//     return true;
// }
// int dequeue() {
//     if (isEmpty()){
//         cout << "Error: Queue is empty" << endl;
//         return -1;
//     } else {
//         int frontElement = q[0];
//         for (int i=0; i<rear-1; i++) {
//             q[i] = q[i+1];
//         }
//         rear--;
//         return true;
//     }
// }

// int frontElement(){
//     if (!isEmpty()){
//         return q[0];
//     } else {
//         cout << "Error: Queue is empty" << endl;
//         return -1;
//     }
// }
// int rearElement()
// {
//     if(isEmpty()){
//         cout<<"error:qeue is empty";
//         return false;
//     }
//     else 
//         return q[rear-1];
// }
// void printRtoF(){
//     for (int i=rear-1; i>=0; i--)
//     {
//         cout<<q[i]<<"   ";
//     }
//     cout<<endl;
// }
// void printFtoR(){
//     for (int i = 0; i < rear; i++)
//     {
//         cout<<q[i]<<"   ";
//     }
//     cout<<endl;
// }
// void display(){
//     for (int i=0; i<rear; i++)
//     {
//     cout<<q[i]<<"   ";
//     }
//     cout<<endl;
// }
// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     printFtoR();
//     enqueue(40);
//     printRtoF();
//     cout<<frontElement()<<endl;
//     cout<<rearElement()<<endl;
//     enqueue(50);
//     enqueue(60);
//     dequeue();
//     cout<<frontElement()<<endl;
//     cout<<rearElement()<<endl;
//     dequeue();
//     enqueue(60);
//     printFtoR();
//     dequeue();
//     printRtoF();
// }
