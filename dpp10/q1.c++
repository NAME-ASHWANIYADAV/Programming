#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the first number: ";
    cin>>x;
     int y;
    cout<<"Enter the second number: ";
    cin>>y;
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout<<"The product of the given two number using pointer is "<<(*ptr1)*(*ptr2);
}