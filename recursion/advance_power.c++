#include<iostream>
using namespace std;
int pow(int x , int n){
    if(n==1) return x;
    int ans = pow(x,n/2);
    if(n%2==0){
    return ans*ans;
    }
    else if (n%2!=0){
        return ans*ans*x;
    }
}
int main (){
    cout<<pow(3,8);
}