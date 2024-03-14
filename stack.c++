// #include <iostream>
// using namespace std;

// const int s = 5;
// int top = -1;
// int st[s];

// bool isempty() {
//     if (top == -1) {
//         return true;
//     }
//     return false;
// }

// bool isfull() {
//     if (top == s - 1) {
//         return true;
//     }
//     return false;
// }

// bool push(int e) {
//     if (isfull()) {
//         cout << "error overflow" << endl;
//         return false;
//     } else {
//         top++;
//         st[top] = e;
//         return true;
//     }
// }

// bool pop() {
//     if (isempty()) {
//         cout << "error underflow" << endl;
//         return false;
//     } else {
//         top--;
//         return true;
//     }
// }

// int topelement() {
//     if (isempty()) {
//         cout << "error stack is empty" << endl;
//         return -1;
//     } else {
//         return st[top];
//     }
// }

// void printBottomtoTop() {
//     for (int i = top; i >= 0; i--) {
//         cout << st[i] << " ";
//     }
//     cout << endl;
// }

// void printToptoBottom() {
//     for (int i = 0; i <= top; i++) {
//         cout << st[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     push(5);
//     push(10);
//     cout << endl << topelement();
//     push(15);
//     push(20);
//     cout << endl << topelement() << endl;
//     printToptoBottom();
//     push(25);
//     printBottomtoTop();
//     push(30);
//     cout << topelement() << endl;
//     pop();
//     cout << topelement() << endl;
//     pop();
//     printToptoBottom();

//     return 0;
// }
// #include<iostream>
// using namespace std;
// const int s=5;
// int top=0;
// int st[s];

// bool isempty()
// {
//     if(top == 0)
//     return true;
//     else
//         return false;
// }

// bool isfull()
// {
//     if(top == s)
//     return true;
//     else    
//         return false;
// }

// bool push(int e)
// {
//     if (isfull())
//     {
//         cout<<"error overflow"<<endl;
//         return false;
//     }
//     else 
//     {
//         st[top] = e;
//         top++;
//         return true;
//     }
// }

// bool pop()
// {
//     if (isempty())
//     {
//         cout<<"error underflow"<<endl;
//         return false;
//     }
//     else
//     {
//         top--;
//         return true;
//     }
// }

// int topelement()
// {
//     if (isempty())
//     {
//         cout<<"error stack is empty";
//         return -1;
//     }
//     else
//     {
//         return st[top - 1];
//     }
// }

// void printBottomtoTop()
// {
//     for (int i = 0; i < top; i++)
//     {
//         cout<<st[i]<<"  ";
//     }
//     cout<<endl;
// }

// void printToptoBottom()
// {
//     for (int i = top - 1; i >= 0; i--)
//     {
//         cout<<st[i]<<"  ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     pop();
//     push(5);
//     push(10);
//     cout<<topelement()<<endl;
//     push(15);
//     push(20);
//     cout<<topelement()<<endl;
//     printToptoBottom();
//     push(25);
//     printBottomtoTop();
//     push(30);
//     cout<<topelement()<<endl;
//     pop();
//     cout<<topelement()<<endl;
//     pop();
//     printToptoBottom();
//     return 0;
// }
#include<iostream>
using namespace std;
const int s=5;
int top=s-1;
int st[s];
bool isempty()
{
    if(top ==s-1)
    {
    	return true;
	}
	return false;
}

bool isfull()
{
    if(top == -1)
    {
    	return true;
	}
	return false;
}

bool push(int e)
{
    if(isfull())
    {
        cout<<"error overflow"<<endl;
        return false;
    }
    else 
    {
        top--;
        st[top]=e;
        return true;
    }
}

bool pop()
{
    if(isempty())
    {
        cout<<"error underflow";
        return false;
    }
    else
    {
        top++;
        return true;
    }
}

int topelement()
{
    if (isempty())
    {
        cout<<"error stack is empty";
        return -1;
    }
    else
    {
        return st[top];
    }
}
void printBottomtoTop()
{
    for (int i=top; i<=s-2; i++)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;
}
void printToptoBottom()
{
    for (int i=top; i <= s-2; i++)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    push(5);
    push(10);
    cout<<endl<<topelement();
    push(15);
    push(20);
    cout<<endl<<topelement()<<endl;
    printToptoBottom();
    push(25);
    printBottomtoTop();
    push(30);
    cout<<topelement()<<endl;
    pop();
    cout<<topelement()<<endl;
    pop();
    printToptoBottom();
    return 0;
}