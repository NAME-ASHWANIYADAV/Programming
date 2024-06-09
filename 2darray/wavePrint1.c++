#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows of the 1st matrix ->";
    cin >> m;
    int n;
    cout << "Enter the number of columns of the  matrix ->";
    cin >> n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //wave print 
    for(int i =0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}