#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x; //9.1
    int y = (int)x;
    if(y<0)y = y - 1;
    x = x-y;
    cout<<x;
}
    