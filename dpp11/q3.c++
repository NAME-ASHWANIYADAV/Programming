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
   int mx = INT8_MIN;
   int smx = INT8_MIN;
   for (int i = 0; i < x; i++)
   {
    if (arr[i]>mx)
    {
        smx = mx;
       mx = arr[i];
    }
    if (arr[i]>smx && arr[i]!=mx)
    {
       smx = arr[i];
    }
   }
   cout<<"the second largest element in the array is "<<smx;
    
}