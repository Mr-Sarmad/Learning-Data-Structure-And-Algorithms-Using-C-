#include <iostream>
using namespace std;

int main() {
    int a[]={3,1,4,11,55,9};
    int length=6;
    for(int i=0; i<length-1; i++) {
        for(int j=length-1; j>i; j--) {
            if (a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(int i=0; i<length; i++) {
        cout<<a[i]<< " ";
    }

    return 0;
}