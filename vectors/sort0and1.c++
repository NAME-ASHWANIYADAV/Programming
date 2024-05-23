#include<iostream>
#include<vector>
using namespace std;
             // FUNCTION FOR METHOD 1 
void sort01(vector<int>& v){
    // taking count
    int n = v.size();
    int noo =0;
    int noz = 0;
    for(int i =0; i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    // filling elements
    for(int i =0; i<n;i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(),v.end());
         // METHOD 1 USING 2 PASS METHOD 
         sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

};