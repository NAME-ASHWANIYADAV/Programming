#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> a;
    int x;
    cout<<"Enter the number of elements: ";
    cin>>x;
    for(int i =0; i<x;i++ ){
        int y;
        cout<<"Enter the "<< i+1<<" element:-";
        cin>>y;
        a.push_back(y);
    }

    //bubble sorting
    bool flag = true;
    for(int i = 0; i < x-1; i++){
        flag = true; // Reset the flag for each iteration
        for(int j = 0; j < x-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = false; // Set the flag to false if a swap is made
            }
        }
        if(flag) break; // If no swaps were made, the array is already sorted
    }

    if(flag == true){
        cout<<"This array is already sorted.";
    } else{
        cout<<"The sorted array is: ";
        for(int i =0;i<x;i++){ 
            cout<<a[i]<<" "; 
        }
    }

    return 0;
}

