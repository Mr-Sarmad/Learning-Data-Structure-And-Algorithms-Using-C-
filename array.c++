#include <iostream>
using namespace std;
int s = 0;
const int cap = 5;
int arr[cap];
bool isfull()
{
    if(s == cap)
        return true;
    else
        return false;
}
bool isempty()
{
    if(s == 0)
        return true;
    else    
        return false;
}
int find(int e)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == e)
            return i;
    }
    return -1;
}
bool insert(int e)
{
    if (isfull())
    {
        cout << "Error: Array is full." << endl;
        return false;
    }
    else
    {
        arr[s] = e;
        s++;
        return true;
    }
}
bool update(int o, int n)
{
    int i = find(o);
    if (i == -1)
    {
        return false;
    }
    else
    {
        arr[i] = n;
        return true;
    }
}
void remove(int e)
{
    int i = find(e);
    {
        for (int j = i; j < s - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        s--;
    }
}
void display()
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    display();
    insert(10);
    insert(20);
    insert(30);
    display();
    insert(40);
    display();
    update(40, 45);
    display();
    insert(50);
    insert(60);
    display();
    remove(30);
    display();

    return 0;
}