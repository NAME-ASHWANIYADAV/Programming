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
        int max = arr[0];
        for(int i=1;i<=y-1;i++){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        int smax = arr[0];
        for(int i=1;i<=y-1;i++){
            if(smax<arr[i] && arr[i] !=max){
                smax=arr[i];
            }
        }
cout<<"The second maximum element in the array is: "<<smax;
        
}