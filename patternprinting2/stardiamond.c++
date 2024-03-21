#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ROWS"<<endl;
    int x;
    cin>>x;
    int nst = 1;// nst = number of star
    int nsp = x-1;// nsp = number of space
    for (int i=1; i<=2*x-1;i++)
    {
        //spaces
        for(int j =1;j<=nsp;j++){
           cout<<" "; 
        }
        if(i<=x-1)nsp--;
        else nsp++;
        //stars
        for(int k =1;k<=nst;k++){
            cout<<"*";
        }
    if(i<=x-1) nst+=2;
    else{nst-=2;}
    cout<<endl;
}
}
