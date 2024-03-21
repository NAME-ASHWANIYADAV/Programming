#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE COST PRICE "<<endl;
     int x;
     cin>>x;
     cout<<endl;
    cout<<"ENTER THE SELLING PRICE "<<endl;
    int y;
    cin>>y;
    cout<<endl;
    if(x-y>0){
     cout<<"IT IS LOSS"<<endl;
    }
    if(x-y<0){
        cout<<"IT IS A PROFIT"<<endl;
    }
    if (x==y){
        cout<<"IT IS NEITHER A PROFIT NOR A LOSS"<<endl;
    }
    cout<<"HOW MUCH PROFIT OR LOSS SELLER HAS MADE = \n";
    float z;
    z = x-y;
    if(z<0){
             cout<<-z;
    }
    else {
        cout<<z;
    }
    
}