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
        cout<<endl;
    }
    cout<<" the required pattern of the matrix is ";
    for(int i=0; i<x;i++){
        for (int j =0; j<y; j++){
            if (( i == j ) || (i+j == x-1)){
                cout<<arr[i][j]<<" ";
            } else{
                cout<<" ";
            }
        }
        cout << endl; // Add this line to print each row on a new line
    }
    return 0;
}