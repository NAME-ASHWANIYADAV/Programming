#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array :- ";
    cin>>n;
   int arr[n-1];
   for (int i = 0; i < n; i++)
   {
   cout<<"Enter the "<< i+1 << " element of the array :-";
   cin>>arr[i];
   }
   int count =0;
  int x;
  cout<<"Enter the number from above count you want :- ";
  cin >>x;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]>x){
        count++;
    }
  }
  cout<<"The number of elements strictly greater than x is "<<count;

  
   
}