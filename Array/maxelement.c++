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
        cout<<"The maximum number is: "<<max;

        
}