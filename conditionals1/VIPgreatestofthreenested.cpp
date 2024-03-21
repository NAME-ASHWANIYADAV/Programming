#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE FIRST POSITIVE INTEGER"<<endl;
    int x;
    cin>>x;
    cout<<endl;
    cout<<"ENTER THE SECOND POSITIVE INTEGER"<<endl;
    int y;
    cin>>y;
    cout<<endl;
    cout<<"ENTER THE THIRD POSITIVE INTEGER"<<endl;
    int z;
    cin>>z;
    cout<<endl;
    if(x>y){
         if(x>z){
            cout<<x<<"is greatest";
         }
         else{cout<<z<<"is greatest";}
    }
    else{   // y > x
        if(y>z){
            cout<<y<<"is greatest";
        }
        else{
            cout<<z<<"is greatest";
        }
    }
}