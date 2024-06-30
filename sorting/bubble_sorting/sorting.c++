#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> a;
    int x;
    cout<<"Enter the number of elements ";
    cin>>x;
    for(int i =0; i<x;i++ ){
        int y;
        cout<<"Enter the" << i+1<<" element:-";
        cin>>y;
        a.push_back(y);
    }

    //bubble sorting 

    for(int i = 0; i < x-1; i++){
    bool flag = true;
    for(int j = 0; j < x-1; j++){
        if(a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            flag = false;
        }
    }
    if(flag){
        cout << "This is already sorted";
        break;
    }
}

}