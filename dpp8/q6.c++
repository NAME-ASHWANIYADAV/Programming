#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
       for (int j = 1; j <= x; j++)
       {
       if (i==j)
       {
        cout<<"*"<<" ";
       }else 
       {cout<<"  ";
       }
       
       }
    
       for (int j = 1; j <= x; j++)
       {
       if (i+j==x)
       {
        cout<<"*"<<" ";
       }else 
       {cout<<"  ";
       }
       
       
       }
       cout<<endl;
    }
    
}