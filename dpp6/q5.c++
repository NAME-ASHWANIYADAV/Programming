#include<iostream>
using namespace std;
int main(){
    int x;
    cout <<"enter the first number ";
    cin>>x;
    int y;
    cout <<"enter the second number ";
    cin>>y;


    for (int i = x; i <= y; i++)
    {
        int z= i;
        int cubesum= 0;
        while(z>0){
            int ld = z%10;
            cubesum += (ld*ld*ld);
            z/=10;
           
        }
         if (i==cubesum)
            {
                cout<<cubesum<<endl;
            }
            
    }
    
}
