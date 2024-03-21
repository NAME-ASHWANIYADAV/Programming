#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ROWS\n";
    int x;
    cin>>x;
    //min(i,j)->minimumof i and j 
    for(int i=1;i<=2*x-1;i++){
        for(int j=1;j<=2*x-1;j++){
            int a= i;//pseudo variables
            int b= j;//pseudo variables
            if(a>x) a = 2*x-i;
            if(b>x) b = 2*x-j;
            int w = min(a,b);
            cout<<x-w+1;
        }
        cout<<endl;
    }
}