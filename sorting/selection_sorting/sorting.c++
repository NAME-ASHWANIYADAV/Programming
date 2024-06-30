#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of elements:-";
    cin>>x;
    vector<int> v;
    for(int i=0;i<x;i++){
        int y;
        cout<<"Enter the "<< i+1<<" element of the array:-";
        cin>>y;
        v.push_back(y);
    }

    // selection sorting
   for(int i = 0; i < x-1; i++){
    int min = INT_MAX; // Fix 1
    int minidx = -1;
    for(int j = i; j < x; j++){
        if(v[j] < min){
            min = v[j];
            minidx = j;
        }
    }
    swap(v[i], v[minidx]); // Fix 2
}

    for(int ele : v){   // foreach loop 
        cout<<ele<<" ";
    }
}