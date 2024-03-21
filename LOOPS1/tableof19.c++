#include<iostream>
using namespace std;
int main (){
    cout<<"TABLE OF 19"<<endl;
    // for(int i= 19;i<=190;i++){ // method 1
    //    if(i%19==0) cout<<i<<endl;
    // }
    for(int i= 19;i<=190;i=i+19){     //method2
        cout<<i<<endl;
    }

}