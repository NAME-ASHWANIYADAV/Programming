#include<iostream>
#include<vector>
using namespace std;

int kclosestelement(vector <int> & arr ,int k , int x) {
  int left = 0, right = arr.size() - k;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (x - arr[mid] > arr[mid + k] - x)
                left = mid + 1;
            else
                right = mid;
        }
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
}
int main (){
    int k, x;
    cout <<"Enter the length of the array :- ";
    cin >> k;
     vector<int> v(k);
     for(int i =0; i< k ; i++){
        int j = 0;;
        cout <<"enter the " << i+1 << " element of the array :- " ;
        cin>>j;
        v.push_back(j);
     }
     cout << "Enter the target number :- ";
     cin >>x;
     int kclosest = kclosestelement(v ,k,x)
}