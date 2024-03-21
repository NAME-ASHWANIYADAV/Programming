#include<iostream>
using namespace std ;
int main (){
    int x;
    cout<<"NUMBER OF ROWS\n";
    cin>>x;
    int y;
    cout<<"NUMBER OF COLUMNS\n";
    cin>>y;
    for(int i =1; i<=x;i++){
        for(int i = 1 ; i<=y; i++){
                cout<<"*";
        }
        cout<<endl;
    }
}