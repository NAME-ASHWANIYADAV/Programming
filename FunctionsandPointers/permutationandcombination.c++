#include<iostream>
using namespace std;
  int fact(int x){
        int f=1;
        for(int i=1;i<=x;i++){
            f*=i;
        }
        return f;
    }
    int npr(int n,int r){
        int npr = fact(n)/fact(n-r);
         return npr;
    }
    int ncr(int n,int r){
        int ncr = fact(n)/(fact(r)*fact(n-r));
    }
int main(){
    int n;
    int r;
    cout<<"Enter the value of n : ";
    cin>>n;
     cout<<"Enter the value of r : ";
    cin>>r;
   int nfact = fact(n);
   int rfact = fact(r);
   int nrfact = fact(n-r);
  int combination = ncr(n,r);
  cout<<"The combination of the given numbers are: ";
  cout<<combination;
  int Permutation = npr(n,r);
  cout<<endl;
  cout<<"The Permutation of the given numbers are: ";
  cout<<Permutation;

}
