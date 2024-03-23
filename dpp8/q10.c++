#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<" Enter the number: ";
    cin>>x;
    int y= x-1;
    int nsp =2*y-1;
    for(int i=1;i<=y;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        nsp -=2;
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*x-1;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(int i=1;i<=2*x-1;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    nsp=1;
    for(int i=y;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        nsp+=2;
         for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}