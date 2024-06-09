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
for (int i = 0; i < x; i++)
{
   //unsorted pair found
   if(arr[i-1]> arr[i]){
    cout<<"NO"<<endl;
    return 0;
   }
}
// no unsorted pair found
cout<<"Yes it is sorted";
return 0;

}
