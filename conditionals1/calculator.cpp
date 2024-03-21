#include<iostream>
using namespace std;
int main(){
    
    int x ,y;
    char op;
    cout <<"ENTER THE PROBLEM\n";
     cin>>x>>op >> y;
    //  if(op=='+'){
    //     cout<<x+y;  THIS IS METHOD 1
    //  }
    //  if(op=='-'){
    //     cout<<x-y;
    //  }
    //  if(op=='*'){
    //     cout<<x*y;
    //  }
    //  if(op=='/'){
    //     cout<<x/y;
    //  }
    switch (op)
    {
    case '+':
    cout<<x+y;
        break;  //METHOD 2 
        case '-':
    cout<<x-y;
        break;
        case '*':
    cout<<x*y;
        break;
        case '/':
    cout<<x/y;
        break;
    
    
    }
}
