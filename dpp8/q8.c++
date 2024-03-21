#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int y= x-1;
    for(int i=1; i<=x; i++){
        for(int j=1;j<=x;j++){
           if(i+j==x+1){
            cout<<i<<" ";
           }else{
            cout<<"  ";
           }
        }

        for(int j=1;j<=y;j++){
            if(j==i-1){
                cout<<i<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}