#include<iostream>
using namespace std;
int fact(int x){
        int f=1;
        for(int i=1;i<=x;i++){
            f*=i;
        }
        return f;
    }
 int ncr(int n,int r){
        int ncr = fact(n)/(fact(r)*fact(n-r));
    }
// int pascal(int n){
//     int pascal =1;
//     for(int i=0;i<=n;i++){
//         for(int j=0; j<=i;j++){
//              pascal = ncr(i,j);
            
//         }
//         return pascal;
//         cout<<endl;
//     }
// }
int main(){
    int n;
    cout<<"Enter the value of number of rows: ";
    cin>>n;
     
   for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<ncr(i,j)<<" ";
    }
    cout<<endl;
   }
}