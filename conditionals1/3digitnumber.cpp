#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER ";
    int n;
    cin>>n;
    if(n>=100&&n<=999){ // && it acts as a logical and 
           cout<<"IT IS A 3 DIGIT NUMBER ";
    }
    else{
        cout<<"IT IS NOT A 3 DIGIT NUMBER ";
    }
}