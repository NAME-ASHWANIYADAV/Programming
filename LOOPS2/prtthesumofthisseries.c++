#include<iostream>
using namespace std;
int main(){
cout <<"ENTER THE NUMBER \n";
int x;
int sum =0;
cin>>x;
for(int i =1 ;i<=x;i++){
    if(i%2!=0)sum +=i;
    else sum-=i;
}
        cout <<sum<<" is the sum of the series";
}