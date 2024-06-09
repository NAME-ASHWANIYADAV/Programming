#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int x;
    cout << "Enter the number of elements in the array: ";
    cin >> x;
    
   

    int arr[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> arr[i];
    }
   int sume = 0 , sumo =0;
   for (int i = 0; i < x; i++)
   {
   if (i%2==0)
   {
    sume+=arr[i];
   }else{
    sumo+=arr[i];
   }
   
   }
   cout<<abs(sume-sumo);
   
return 0;

}
