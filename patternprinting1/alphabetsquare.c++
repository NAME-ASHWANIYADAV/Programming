#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ENTER THE NUMBER OF ROWS\n";
    cin>>x;
    int y;
    cout<<"ENTER THE NUMBER OF COLUMNS\n";
    cin>>y;
    for(int i = 1;i<=x;i++){
        for(int j = 1 ; j<=y;j++){
            cout<<(char)(j+64)<<" " ;
        }
        cout<<endl;
     }
}