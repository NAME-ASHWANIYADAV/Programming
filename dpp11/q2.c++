#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of  elements in the array ";
    cin>>x;
    int arr[x-1];
    for(int i=0;i<x;i++){
        cout<<"enter the "<<i+1<<" element of the array ";
        cin>>arr[i];
            };
    int minimum;
     minimum =arr[0];
    for (int i = 0; i < x; i++)
    {
        if (minimum> arr[i])
        {
            minimum  = arr[i];
        }
        
    }
    cout<<"the minimum element of the given array is "<<minimum;
    
}