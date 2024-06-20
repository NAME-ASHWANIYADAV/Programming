#include<bits/stdc++.h>
using namespace std;
int main(){
    int x ;
    int y;
    cout<<"Enter the number of rows:-";
    cin>>x;
    cout<<"Enter the number of columns:-";
    cin>>y;
    int arr[x][y];
    for(int i=0; i<x;i++){
        for(int j=0;j<y;j++){
 cin>>arr[i][j];
        
        }
           
    }
      cout<<endl;

      for(int j=0;j<y;j++){
        if(j%2==0){ //bottom to top
            for(int i = y-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ // top to bottom
            for(int i=0;i<x;i++){
                cout<<arr[i][j]<<" ";
            }
        }
      }

}