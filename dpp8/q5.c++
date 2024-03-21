#include<iostream>
using namespace std;
int main (){
    cout<<"ENTER THE NUMBER OF ROWS"<<endl;
    int x;
    cin>>x;
    //2x-1 numbers
    for(int i=1; i<=x;i++){
        cout<<i<<" ";
    }
    for(int i=x-1; i>=1;i--){
        cout<<i<<" ";
    }cout<<endl;
    int y=x-1;
    int nsp=1;
    //numbers
    for(int i=1;i<=y;i++){
        int a=1;
        for(int j=1;j<=y+1-i;j++){
            cout<<a<<" ";
            a++;
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
            a++;
        }
        nsp+=2;
        //numbers
        for(int l=1;l<=y+1-i;l++){
            cout<<2*x-a<<" ";
            a++;

        }
        cout<<endl;
    }
    }
