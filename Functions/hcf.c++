#include<iostream>
using namespace std;
int hcf(int x, int y){
    int f =1;
    for(int i= min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            f =i;
            break;
        }
        
    }
    return f ;
}
int main(){
    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the Second number: ";
    cin>>y;
    cout<<hcf(x,y);
}