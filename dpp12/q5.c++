#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of elements of the array:-";
    cin>>x;
    
    int arr[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> arr[i];
    }
    for(int i=0; i<x; i++){
        if(i%2==0){
            arr[i]+=10;
        }else {
            arr[i] = 2*arr[i];
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}