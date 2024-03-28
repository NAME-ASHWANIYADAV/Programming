#include<iostream>
using namespace std;
int squareofcount(int x){
    int count =0;
    while(x>0){
        x/=10;
        count++;
    }
    cout<<"The square of the count of the given number is "<<count*count;
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    squareofcount(x);
}