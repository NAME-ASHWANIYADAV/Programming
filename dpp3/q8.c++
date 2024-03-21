#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE VALUE OF X COORDINATE OF 1st POINT .\n";
   float  x1;
    cin>>x1;
    
    cout<<"ENTER THE VALUE OF Y COORDINATE OF 1st POINT .\n";
    float  y1;
    cin>>y1;
    
    cout<<"ENTER THE VALUE OF X COORDINATE OF 2nd POINT .\n";
    float  x2;
    cin>>x2;
    
    cout<<"ENTER THE VALUE OF Y COORDINATE OF 2nd POINT .\n";
    float  y2;
    cin>>y2;
    
    cout<<"ENTER THE VALUE OF X COORDINATE OF 3rd POINT .\n";
    float  x3;
    cin>>x3;
    
    cout<<"ENTER THE VALUE OF  Y COORDINATE OF 3rd POINT .\n";
    float  y3;
    cin>>y3;
    if ((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2))
    {
       cout<<"THIS THREE POINTS LIE ON A LINE";
    }
    else{cout<<"THIS THREE POINTS DOES NOT LIE ON A LINE";}
    
    
     return 0;
    
}   