#include<iostream>
using namespace std;
int main(){
    int x =11;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    cout<<x<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;
}