#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE LENGTH OF FIRST SIDE OF TRIANGLE "<<endl;
    int x;
    cin>>x;
    cout<<endl;
    cout<<"ENTER THE LENGTH OF SECOND SIDE OF TRIANGLE"<<endl;
    int y;
    cin>>y;
    cout<<endl;
    cout<<"ENTER THE LENGTH OF THIRD SIDE OF TRIANGLE"<<endl;
    int z;
    cin>>z;
    cout<<endl;
    if((x+y>z) && (y+z>x) && (z+x >y)){
           cout<<"THIS ARE THE SIDES OF A TRIANGLE";
    }
    else{ 
        cout<<"THIS ARE NOT THE SIDE OF A TRIANGLE" ;
    }
}
    
