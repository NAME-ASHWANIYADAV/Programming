#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER THE CHARACTER\n";
    cin>>ch;
    int x = (int)ch; //this is typecasting
    if (x>=48 && x<=58)
    {
        cout<<"THE GIVEN CHARACTER IS A NUMBER";
    }
    else if (x>=65 && x<=90)
    {
        cout<<"THE GIVEN CHARACTER IS A CAPITAL ALPHABET";
    }
     else if (x>=97 && x<=122)
    {
        cout<<"THE GIVEN CHARACTER IS A SMALL LPHABET";
    }
    else{
        cout<<"THE GIVEN CHARACTER IS A SPECIAL CHARACTER";
    }
    
    return 0;
}