#include<bits/stdc++.h>
using namespace std;
int main(){
      // taking first array as input
    int x, y;
    cout<<"Enter the number of rows of  matrix:-";
    cin>>x;
    cout<<"Enter the number of columns of  matrix:-";
    cin>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0; j<y;j++){
            cout<<"Enter the "<<i<<" row "<<j<<" element of matrix:-";
            cin>>arr[i][j];
        }
    }

    int l1,r1,l2,r2;
    cout<<"Enter the first coordinate:-"<<endl;
    cin>>r1>>l1;
    cout<<"Enter the second coordinate:-"<<endl;
    cin>>r2>>l2;
    int sum =0;

    //addition 
    for(int i=r1;i<=r2;i++){
        for(int j= l1;j<=l2;j++){
              sum+= arr[i][j];
        }
    }
    cout<<sum;
    
}