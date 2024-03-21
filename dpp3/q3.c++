#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE YEAR TO CHECK WHETHER IT IS A LEAP YEAR OR NOT.\n";
    int x;
    cin>>x;
    if (x%400==0)
    {
      cout<< " IT IS A LEAP YEAR";
    }
    else
    {
        cout<< " IT IS NOT A LEAP YEAR";
    }
    
    
}