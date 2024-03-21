#include<iostream>
using namespace std;
int main(){
cout <<"ENTER THE NUMBER \n";
int x;
int product =1;
cin>>x;
for(int i =1 ;i<=x;i++){
    product *= i;
}
        cout <<product<<" is the factorial of the series";
}