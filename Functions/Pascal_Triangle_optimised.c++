#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter the number of rows: ";
cin>>x;
// Here we use the formula to calculate the pascal triangle 
// nc(r+1) = ncr*{(n-r)/(r+1)}
// we use this formula to calculate the pascal triangle
for(int i=0;i<=x;i++){
    int current =1;
    for(int j=0;j<=i;j++){
       current = current*(i-j)/(j+1);
    }
    cout<<endl;
}
}
