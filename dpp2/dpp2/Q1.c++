#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"ENTER FIRST NUMBER"<<endl;
    cin>>x;
    int y,m;
    cout<<"ENTER SECOND NUMBER"<<endl;
    cin>>y;
    cout<<endl;
        cout<<"ENTER  VALUE FOR TAKING MODULUS"<<endl;
    
    cin>>m;
    int z = (x*y)%m;
    cout<<"OUTPUT IS:"<<z;
    }