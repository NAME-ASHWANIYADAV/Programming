#include<iostream>
using namespace std;
void print(int i , int n){
    // base case
    if(i>n) return;
    // recursive call
    print(i+1,n);
    //work 
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(1,n);
}