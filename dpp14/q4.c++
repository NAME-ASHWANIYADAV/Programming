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

    int maxSum = INT8_MIN;
    int maxrow = 0;

    for (int i = 0; i < x; i++)
    {
       int sum =0;
       for (int j = 0; j < y; j++)
       {
        sum+=arr[i][j];
       }
    if(sum>maxSum){
        maxSum = sum;
        maxrow = i;
    }
    }
    cout<<maxrow;
}