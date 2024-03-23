#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the 1st number: ";
    cin>>x;
    int y;
    cout<<"Enter the 2nd number: ";
    cin>>y;
    int* p= &x;
    int* q= &y;
    int a = *p + *q;
    cout<<"The sum of given 2 numbers is ";
    cout<<a;


}