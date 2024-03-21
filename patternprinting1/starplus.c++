#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ROWS\n";
    int x;
    cin>>x;
    int mid = x/2 +1;
    for(int i = 1; i<=x;i++){
        for(int j = 1; j<=x;j++){
            if (i==mid || j==mid)
            {
                cout<<"*";
            }
         else{cout<<" ";}   
        }
        cout<<endl;
    }
}