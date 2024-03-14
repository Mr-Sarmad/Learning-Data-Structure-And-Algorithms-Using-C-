#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
    void insert(int e){
        Node *temp=new Node;
        temp-> data=e;
        temp-> next=head;
        head =temp;
    }
Node *find(int e){
    Node *temp=head;
    while(temp!=NULL){
        if (temp->data==e)
        {
            return temp;
        }
        else
        temp=temp->next;
    }
    cout<<"does not match"<<endl;
    return NULL;
}
bool iEmpty(){
    if(head==NULL)
    return true;
    else
    return false;
}
bool isFull(){
    if(head==NULL)
    {
        return true;
    }
    else
    return false;
}
bool update(int o,int n){
    Node *temp=find(o);
    if(temp!=NULL){
        temp->data=n;
        return true;
    }
    else
    cout<<"data not match";
    return false;
}
void print(){
    Node *temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    cout<<endl;
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    print();
    insert(40);
    find(20);
    find(60);
    print();
    update(10,25);
    print();
}