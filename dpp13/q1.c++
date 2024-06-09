#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countTriplets(int arr[], int n , int x){
    int count =0;

    sort(arr, arr+n);

    for(int i=0;i<n-2; i++){
        int left = i+1;
        int right = n-1;

        while(left<right){
            int sum = arr[i]+ arr[left]+arr[right];
            if(sum ==x){
                count ++;
                left ++;
                right --;
            } else if(sum<x){
                left ++;
            } else{
                right --;
            }
        }
    }
    return count ;
}
int main(){
    int n,x;
    cout<<"Enter the number of elements of the array:-";
    cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
   cout<<"Enter the "<<i+1<<" element of the array:-";
   cin>>arr[i];
   }
   cout << "Enter the value of x: ";
    cin >> x;
   
   int result = countTriplets(arr ,n,x);
   cout<<"The number of triplets with sum equal to "<<x<<" is:-"<<result<<endl;

   return 0;
   
}