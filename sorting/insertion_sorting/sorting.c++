#include<iostream>
#include<vector>
#include<algorithm>
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

	// Insertion sort
	for(int i=1;i<x;i++){
		int key = v[i];
		int j = i-1;
		while(j >= 0 && v[j] > key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}

	for(int ele : v){
		cout<<ele<<" ";
	}
}
