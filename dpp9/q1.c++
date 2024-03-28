#include<iostream>
using namespace std;
int square(int x){
    
    for(int i=1;i<=x;i++){
       cout<<i*i<<endl;
    }
        
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
   square(x);
}