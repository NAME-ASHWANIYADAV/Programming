#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE LENGTH OF THE FIRST SIDE OF TRIANGLE.\n";
    int x;
    cin>>x;
     cout<<"ENTER THE LENGTH OF THE SECOND SIDE OF TRIANGLE.\n";
    int y;
    cin>>y;
    cout<<"ENTER THE LENGTH OF THE THIRD SIDE OF TRIANGLE.\n";
    int z;
    cin>>z;
        if (x==y && y==z && z==x)
        {
           cout<<"IT IS AN EQUILATERAL TRIANGLE";
        }
        else if (x!=y && y!=z && z!=x ){
            cout<<"IT IS A SCALENE TRIANGLE";
        }
        else{cout<<"IT IS AN ISOSCELES TRIANGLE";}
return 0;        
}   