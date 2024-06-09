#include<iostream>
#include<vector>
using namespace std;
int main (){
    int x;
    cout<<"Enter the number of  elements in the array ";
    cin>>x;
    int arr[x-1];
    for(int i=0;i<x;i++){
        cout<<"enter the "<<i+1<<" element of the array ";
        cin>>arr[i];
            }
      int product =1;
      for(int i=0;i<x;i++){
        product *=arr[i];
      }  
      cout<<"the product of the elements of the given array is "<<product;    
}