#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE MARKS OF THE STUDENT A.\n";
    int x;
    cin>>x;
     cout<<"ENTER THE MARKS OF THE STUDENT B.\n";
    int y;
    cin>>y;
    cout<<"ENTER THE MARKS OF THE STUDENT C.\n";
  int z;
    cin>>z;
        if (x<y && x<z )
        {
           cout<<"Student A has the least marks";
        }
        else if (y<x && y<z){
            cout<<"Student B  has the least marks";
        }
         else if (z<x && z<y){
            cout<<"Student C has the least marks";
        }
        else if(x==y && y ==z && z==x){
            cout<<"All students have same marks";
        }
        else if ((x==y && y!=z && z!=x)){
            cout<<"Student A and B have same marks";
        }
        else if ((y==z && z!=x &&  x!=y)){
            cout<<"Student B and C have same marks";
        }
        else if ((z==x && x!=y && y!=z)){
            cout<<"Student A and C have same marks";
        }
        
return 0;        
}   