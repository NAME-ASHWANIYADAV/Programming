// write a program to find the sum of the given number and its reverse

#include<iostream>
using namespace std;
int main(){
    int x ;
    int r = 0;
    cout<<"Enter the number";
    cout<<endl;
    cin>>x;
    int f = x;
    while(x>0){
        int ld = x%10;
        r = r*10;
        r = r + ld;
        x = x/10;
        
    }
cout<<r+f;

}