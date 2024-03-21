#include<iostream>
using namespace std;
int main (){
    cout<<"ENTER THE NUMBER OF ROWS"<<endl;
    int x;
    cin>>x;
    for(int i = 1; i<=2*x-1;i++){
        cout<<"* ";
    }
    cout<<endl;
   int m = x-1; //new lines
   int nsp =1;
   for(int i = 1; i<=m;i++){
    //stars
    for(int j=1;j<=m+1-i;j++){
        cout<<"* ";
    }
    //spaces
    for(int k =1 ; k<=nsp;k++){
        cout<<"  ";
    }
    nsp+=2;
    //stars
    for(int j=1;j<=m+1-i;j++){
        cout<<"* ";
    }
   
   cout<<endl;
   }
    }
