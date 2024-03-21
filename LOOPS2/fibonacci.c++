#include<iostream>
using namespace std;
int main(){
    
    cout<<"ENTER THE NUMBER \n";
    int n;
    cin>>n;
int x =1;
int y=1;
int fibonacci =0;
for(int i=1; i<=n-2;i++)
{   fibonacci = x +y; x =y ; y = fibonacci ;
    
}

        cout <<y<<" is the fibonacci of the series"; //we take y because it giving correct fibonacci pattern
}