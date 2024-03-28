#include<iostream>
using namespace std;
int oddnumbers(int x, int y){
    if(y>x){
         for(int i=x;i<=y;i++){
        if(i%2!=0){
            cout<<i<<endl;
        } 
    }
    } else if(x>y){
        cout<<"The second number should be greater than first number.";
    }else if(x==y){
        cout<<"Both numbers are same .";
    }
    
   
}
int main(){
    int x, y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    oddnumbers(x,y);
}