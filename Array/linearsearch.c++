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
        int x;
        cout<<"Enter the number to be find. ";
        cin>>x;
        //search
        // checkmark
        bool flag = false;

        for(int i =0; i<=y-1;i++){
            if(x==arr[i]){
                flag = true;
               
            }
        }
        if(flag =true){
            cout<<"The given element is exist at the array"<<endl;
        }else{
            cout<<"404 Element Not found";
        }

        
}