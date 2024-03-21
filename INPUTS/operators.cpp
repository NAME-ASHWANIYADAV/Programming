#include<iostream>
using namespace std;
int main(){
    int a = 55;
    cout<<(a==7)<<endl;  // == it is used for comparison 
    int b = 57; //whereas = is used for assigning a value 
    cout<<(b==57)<<endl;
    int c = 77;
    cout<<(c!=8)<<endl; //Here != is used for checking not equals to 
    int w = 7;
    cout<<(w+=55)<<endl; //here += means w= w + 55
    int e = 7;
    cout<<(e-=55)<<endl;  //here-= means e = e - 55
    int f = 7;
    cout<<(f/=55)<<endl;  //here /= means f = f/55
    int g = 7;
    cout<<(g%=55)<<endl; // here %= means g = remainder when g/55 but g<55 so it reasults into g
}
