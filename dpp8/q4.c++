#include<iostream>
using namespace std;
int main (){
    cout<<"ENTER THE NUMBER OF ROWS"<<endl;
    int x;
    cin>>x;
    for(int i = 1; i<=2*x-1;i++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
   int m = x-1; //new lines
   int nsp =1;
   for(int i = 1; i<=m;i++){
    //numbers
    int a =1;
    for(int j=1;j<=m+1-i;j++){
        cout<<(char)(a+64)<<" ";a++;
    }
    //spaces
    for(int k =1 ; k<=nsp;k++){
        cout<<"  ";a++;
    }
    nsp+=2;
    //numbers
    for(int j=1;j<=m+1-i;j++){
        cout<<(char)(a+64)<<" ";a++;
    }
   
   cout<<endl;
   }
    }
