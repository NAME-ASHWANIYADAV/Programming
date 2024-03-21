#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=x-i;j++){ //spaces
            cout<<"  ";
        }
        for(int j=i; j>=1;j--){
            cout<<(char)(j+64)<<" ";
        }
         for(int j=2; j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}