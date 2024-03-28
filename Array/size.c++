#include<iostream>
using namespace std;
int main(){
                      //we use this to find the size of any array
    int arr[] = {1,2,3,4,5,6,7,8,9,7,6,5,4,3,21,3,66,4,6,76,7};
    int n= sizeof(arr)/sizeof(arr[1]);
    cout<<n;
}
