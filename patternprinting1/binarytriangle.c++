#include<iostream>
using namespace std;
int main(){
    cout<<"no of rows:-";
    int x;
    cin>>x;
    // //method 1-extra variable
    // int a;
    // for (int i = 1; i <=x ; i++)
    // {
    //     if (i%2!=0)
    //   {
    //    a=1;
    //   }
    //   else{a=0;}
    //   for (int j = 1; j <=i ; j++)
    // {
    //   cout<<a;
    //   //flipping
    //     if (a==1)
    //     {
    //         a=0;
    //     }
    //     else
    //     {
    //         a=1;
    //     }
        
    // }
    //cout<<endl;
//}
        //METHOD 2
        for (int i =1; i<=x;i++ )
        {
           for (int j =1; j<=i;j++ ){
            if((i+j)%2==0 ){
                
                cout<<1;
            }
            else{cout<<0;}
            
           }
           cout<<endl;
        }
        
    }