#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER " <<endl;
    int x;
    cin>>x;
    if(x%5==0 && x%3==0){
           cout<<" THE NUMBER IS DIVISIBLE BY BOTH 3 AND 5"; 
    }
    else {
        cout<<"IT IS NOT DIVISIBLE BY 3 AND 5 ";
    }
}