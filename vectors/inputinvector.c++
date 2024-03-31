#include<iostream>
#include<vector>
using namespace std;
int main(){
    //METHOD 1
    // WHEN THE SIZE OF THE VECTOR IS GIVEN 
    vector<int>v(5);
    for (int i=0;i<5;i++){
        cout<<"Enter the value of the vector ";
        cin>>v[i];
        cout<<endl;
    }
     cout<<"the values in the vector are as follows ";
    for(int i=0;i<5;i++){
       
        cout<<v[i]<<" ";
    }
    cout<<endl;
                    //METHOD 2
            //WHEN THE SIZE OF THE VECTOR IS NOT GIVEN 
    vector<int>c;
    int x;
    cout<<"Enter the number of elements you want ";      
    cin>>x;
    for(int i =0;i<x;i++){
        int y;
        cout<<"enter the "<<i+1<<" you want to enter";
        cin>>y;
        c.push_back(y);

    }  
    cout<<"the values in the vector are as follows ";  
    for(int j=0;j<x;j++){
        cout<<c[j]<<" ";
    }   

}