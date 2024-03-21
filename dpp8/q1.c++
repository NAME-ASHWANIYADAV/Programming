#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
                                       //METHOD 1
    // for(int i =1; i<=x; i++){
    //     for(int j=1;j<=x-i;j++){ //spaces
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i;j++){ //1st pyramid
    //         cout<<j<<" ";
    //     }
    //     for(int j=1; j<=i-1;j++){ //2nd pyramid
    //         cout<<j+i<<" ";
    //     }
    //     cout<<endl;

    // }
                                       //METHOD 2

    for(int i =1; i<=x; i++){
        for(int j=1;j<=x-i;j++){ //spaces
            cout<<"  ";
        }
        
        for(int j=1; j<=2*i-1;j++){ 
        }
        cout<<endl;

    }
}