#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER\n";
    int x ;
    cin>>x;
    if(x%5==0 || x%3==0 ){
         cout<<"IT IS DIVISIBLE BY 3 OR 5";
    }
    else{ cout<<"IT IS NOT DIVISIBLE BY 3 OR 5";}
}