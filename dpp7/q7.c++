#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the length: ";
    cin>>x;
    for(int i =1; i<=x; i++){
        for(int j =1; j<=x-i;j++){ // spaces
            cout<<"  ";
        }
        for(int j=1; j<=x; j++){ // stars
            cout<<"* ";
        }
        cout<<endl;
    }

}