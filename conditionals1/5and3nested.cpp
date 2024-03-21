#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER\n";
    int x ;
    cin>>x;
    if(x%5==0 ){
        if(x%3==0){
            cout<<"THE NUMBER IS DIVISIBLE BY BOTH 5 AND 3";
        }
    
    else{ cout<<"IT IS NOT DIVISIBLE BY 3 AND  5";}
    }
    else{ cout<<"IT IS NOT DIVISIBLE BY 3 AND 5";}
}