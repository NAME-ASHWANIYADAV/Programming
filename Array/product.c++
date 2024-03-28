#include<iostream>
using namespace std;
int main(){
        
        int y;
        cout<<"Enter the Number of elements: ";
        cin>>y;
       int  arr[y];
        // inputs
        for(int i=0;i<=y-1;i++){
            cout<<i<<" index element is: ";
            cin>>arr[i];
        }
        // sum of elements 
        int product = 1;
        for(int j=0;j<=y-1;j++){
            product*=arr[j];
        }
        cout<<"The product of the elements of the given array is: "<<product;

        
}