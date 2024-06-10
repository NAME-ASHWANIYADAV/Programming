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
            cout<<"Enter the "<<i<<" row "<<j<<" element of 1st matrix:-";
            cin>>arr[i][j];
        }
    }
     // taking second array as input
   
    int brr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0; j<y;j++){
            cout<<"Enter the "<<i<<" row "<<j<<" element of 2nd matrix:-";
            cin>>brr[i][j];
        }
    }

    // adding two 2d array 
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            arr[i][j] = arr[i][j] + brr[i][j];
        }
       
    }

    // printing the array
    for(int i =0; i<x; i++){
        for(int j=0; j<y;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}