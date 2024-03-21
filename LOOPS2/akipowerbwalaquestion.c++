#include<iostream>
using namespace std;
int main(){
cout <<"ENTER THE BASE NUMBER \n";
int x;
cin>>x;
cout <<"ENTER THE EXPONENT NUMBER \n";
int y;
cin>>y;
int power =1;

for(int i =1 ;i<=y;i++){
     power =power*x ; 
}

        cout <<power<<" is the value of first number in power of second number of the series";
}