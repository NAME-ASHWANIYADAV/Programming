#include<iostream>
#include<string>
using namespace std;
int gcd(int a , int b){
    // Time complexity of gcd(a,b) is O(log(a+b))//
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a = 55;
    int b = 33;
   cout<< gcd(a,b);
}