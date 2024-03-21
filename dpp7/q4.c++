#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i = 1; i<=x; i++){
        if(i%2!=0){
            for(int j =1; j<=i;j++){
                cout<<j<<" ";
            }
        }
            else{
                for(int j =1; j<=i;j++){
                cout<<(char)(j+64)<<" ";
                }
            }
            cout<<endl;
        }
    }
