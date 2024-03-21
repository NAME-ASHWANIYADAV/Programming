#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE VALUE OF ABCISSA.\n";
    int x;
    cin>>x;
     cout<<"ENTER THE VALUE OF ORDINATE.\n";
    int y;
    cin>>y;
    if (x==0 && y==0)
    {
       cout<<"IT LIES ON THE ORIGIN";
    }
    else if(x==0 && y!=0){
        cout<<"IT LIES ON THE Y AXIS";
    }
    else if(x!=0 && y==0){cout<<"IT LIES ON THE X AXIS";}
    else if(x>0 && y>0){
        cout<<"IT LIES ON THE FIRST QUADRANT";
    }
     else if(x<0 && y>0){
        cout<<"IT LIES ON THE SECOND QUADRANT";
    }
     else if(x<0 && y<0){
        cout<<"IT LIES ON THE THIRD QUADRANT";
    }
     else if(x>0 && y<0){
        cout<<"IT LIES ON THE FOURTH QUADRANT";
    }
               
return 0;        
}   