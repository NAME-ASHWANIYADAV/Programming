#include<iostream>
using namespace std;
int main(){
    int x =501;
    int* p = &x;
    cout<<p<<endl<<*p;
    int z=11;
    int* q= &z;
    cout<<z<<endl;
    *q = 6543;
    cout<<z;

}