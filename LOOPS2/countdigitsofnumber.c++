#include<iostream>
using namespace std;
int main(){
        int x;
    cout<<"ENTER THE NUMBER\n";
    cin>>x;
    int count = 0;
    int z =x;
        while (x>0)
    {
        x/=10;count++;
    }
    if (z==0) cout<<1<<"  IS THE NUMBER OF DIGITS OF GIVEN NUMBER";
    else cout<<count<<"  IS THE NUMBER OF DIGITS OF GIVEN NUMBER";

}