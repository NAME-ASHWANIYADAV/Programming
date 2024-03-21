#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i =1; i<=x; i++){
        for(int j=1; j<=x-i;j++){//spaces
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1;j++){ //alphabets
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}