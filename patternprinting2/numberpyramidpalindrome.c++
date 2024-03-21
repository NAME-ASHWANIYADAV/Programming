#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ROWS"<<endl;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        //spaces
        for (int j=1;j<=x-i;j++ )
        {
            cout<<" ";
          
        }
        //stars
     
        for (int k=1;k<=i;k++ )
        {
            cout<<k;
          
        }
        //for3 loop
        for(int z =i-1;z>=1;z--){
            cout<<z;
        }
        cout<<endl;
        
     }
     }