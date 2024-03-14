#include<iostream>
using namespace std;
void insertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void print(int a[], int n) {
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main() {
    int a[]={12, 11, 13, 59, 46};
    int n=5;
    insertionSort(a,n);
    print(a,n);
}