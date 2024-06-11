#include<bits/stdc++.h>
using namespace std;

int main (){
    int x, y;
    cout<<"Enter the no of rows of the array ";
    cin>>x;
    cout<<"Enter the no of columns of the array ";
    cin>>y;
    int arr[x][y];
    for(int i =0 ;i<x;i++){
        for(int j =0; j<y; j++){
            cin>>arr[i][j];
        }
        
    }
   cout<<endl;
   // transposing the matrix
   for(int i =0; i<x;i++){
     for(int j=0; j<i;j++){
        swap(arr[i][j],arr[j][i]);
     }
   }
   for(int i =0; i<x;i++){
    for(int j=0;j<y;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;

   for(int c=0;c<y;c++){
    // reverse the cth column
    int i =0;
    int j=y-1;
    while(i<j){
        swap(arr[i][c],arr[j][c]);
        i++;
        j--;
    }
   }
   //printing 
   for(int i =0; i<x;i++){
    for(int j =0; j<y;j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
   }

    return 0;
}