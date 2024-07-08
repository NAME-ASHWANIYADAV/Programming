#include<iostream>
using namespace std;
int main (){
    int arr[7] = { 0, 1, 2, 3, 4,5,9};
    int n = 7;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while (lo <= hi){
         int mid = lo + (hi -lo)/2;
         if (arr[mid] == mid){
            lo = mid +1;
         }else{
            ans = mid;
            hi = mid -1;
         }
    }
    cout<<ans;
}