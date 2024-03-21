#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER\n";
    int x;
    cin>>x;
    int a=3;
    for(int i =1;i<=x;i++){
        cout<<a<<endl;
        a=a*4;
    }
}