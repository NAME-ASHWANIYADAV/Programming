#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ENTER THE NUMBER\n";
    cin>>x;
    bool flag =true; //true means prime
    for(int i =2; i<x;i++){
        if(x%i==0){//i is a factor of x
            flag=false; //false means composite 
            break;
        }

    }       if(x==1) cout<<"1 is neither prime nor composite";
       else if(flag==true){cout<<x<<"is a prime number";}
        else {cout<<x<<"is a composite number ";}
}