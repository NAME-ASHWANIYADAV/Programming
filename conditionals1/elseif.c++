#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE MARKS"<<endl;
    int x;
    cin>>x;
    cout<<endl;
    if(x>=91){
       cout<<"EXCELLENT";
    }
    else if(x>=81){
       cout<<"VERY GOOD";
       }
       else if(x>=71){
       cout<<"GOOD";
       }
             
else if(x>=61){
       cout<<"CAN DO BETTER";
       }
            else if(x>=51){
       cout<<"AVERAGE";
       }
       else if(x>=41){
       cout<<"BELOW AVERAGE";
       }
      else {
       cout<<"FAILS";
       }


}