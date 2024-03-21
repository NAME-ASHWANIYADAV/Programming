#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cout<<"Enter the length of the rectangle: ";
    cin>>x;
     cout<<"Enter the breadth of the rectangle: ";
    cin>>y;
    for(int i=1; i<=y; i++){
        for(int j=1; j<=x; j++){
            if(i==1 || i ==y || j ==1 || j ==x){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }

}