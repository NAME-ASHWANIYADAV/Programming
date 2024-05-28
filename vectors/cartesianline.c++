#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int i =0;
    int n = v.size();
    int j= n-1;
    while(i<j){
         if(v[j]>=0){
        j--;
    }
    if(v[i]<=0){
        i++;
    }
    if(i>j)
    break;
    if((v[i]>=0) && (v[j]<=0)){
        int temp = v[i];

        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    }

}
int main(){
  vector<int> v;
  cout<<"enter the size of the vector:-";
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" element of the vector:-";
    int z;
    cin>>z;
    v.push_back(z);
  }
  cout<<endl;

  cout<<"the vector before sorting is:- ";
  for(int i =0; i<n;i++){
    cout<<v[i]<<" ";
  }
  sort(v);
  cout<<"the vector after sorting is:- ";
  for(int i =0; i<n;i++){
    cout<<v[i]<<" ";
  }
}
