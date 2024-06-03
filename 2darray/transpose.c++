#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<" ";
     cout<<"Enter the number of columns:";
    cin>>n;
    cout<<" ";
    int arr[m][n];
        for(int i =0;i<m;i++){
       for(int j= 0; j<n;j++){
        cout<<"enter the "<<i+j+1<<" element of the matrix ";
        cin>>arr[i][j];
       }
    }
  // printing transpose
  for(int j = 0;j<n;j++){
    for(int i= 0;i<m;i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}