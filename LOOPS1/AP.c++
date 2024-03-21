#include<iostream>
using namespace std;
int main (){
    cout<<"ENTER THE VALUE OF N"<<endl;
    int n;
    cin>>n;
    cout<<"ARITHMETIC PROGRESSION"<<endl;

    for(int i= 1;i<=2*n-1;i++){     //method1
       if(i%2!=0) cout<<i<<endl;
    }
    // int a = 1 ;
    // for(int i = 1; i<=n ; i++){
    //         cout<<a<<endl;
    //         a = a +2 ; // METHOD2 - separate variable 
    // }
}