#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ROWS"<<endl;
    int x;
    cin>>x;
        //NESTED LOOPS
    // for(int i=1;i<=x;i++){
    //     //spaces
    //     for (int j=1;j<=x-i;j++ )
    //     {
    //         cout<<" ";
          
    //     }
    //     //stars
     
    //     for (int k=1;k<=i;k++ )
    //     {
    //         cout<<k;
          
    //     }
    //     cout<<endl;
        
    // }
        //IFELSE 
        for (int i=1;i<=x;i++ )
        {
            for (int j=1;j<=x;j++ )
            {
                if(i+j>=x+1){
                    cout<<j+(i-x);
                }
                else{cout<<" ";}
            }
            cout<<endl;
        }
        
     }
     