#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,3,2,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =1; i<n;i++){
        arr[i] +=arr[i-1];
    }

    int idx = 0;
    for(int i =1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx =i;
            break;
        }
    }
    if(idx!=0) cout<<"yes it can be partitioned at index "<<idx;
    else cout<<"Cannot be partitioned";
}