#include<iostream>
using namespace std;
int main(){cout<<"ENTER THE FIRST POSITIVE INTEGER"<<endl;
    int x;
    cin>>x;
    cout<<endl;
    cout<<"ENTER THE SECOND POSITIVE INTEGER"<<endl;
    int y;
    cin>>y;
    cout<<endl;
    cout<<"ENTER THE THIRD POSITIVE INTEGER"<<endl;
    int z;
    cin>>z;
    cout<<endl;
    if(x>y && x>z){
      cout<<"THE HIGHEST POSITIVE INTEGER IS" <<x;  
    }
    if(y>z && y>x){
      cout<< "THE HIGHEST POSITIVE INTEGER IS" <<y;  
    }
    if(z>x && z>y){
      cout<< "THE HIGHEST POSITIVE INTEGER IS \n"  <<z;  
    }
    
    

}