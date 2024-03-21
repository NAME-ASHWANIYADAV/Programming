#include<iostream>
using namespace std;
int main(){
   cout <<"ENTER AN INTEGER: ";
   int n;
   cin>>n;
   // if(( n%5==0|| n%3==0) && n%15!=0){  //(HERE WE DO IT BY COMPLEX METHOD)
// cout<<"THE NUMBER IS DIVISIBLE BY 5 OR 3 BUT NOT BY 15";
  // } 
  //else{
    //  cout<<"NOT MATCHING CONDITION" ;
  // }
    if( n%5==0 || n%3==0){
        if( n%15!=0){
            cout<<"THE NUMBER IS DIVISIBLE BY 5 OR 3 BUT NOT BY 15";
        }
        else{cout<<"NOT MATCHING CONDITION" ; //THIS IS THE NESTING PROCESS
        }
    }
    else{ cout<<"NOT MATCHING CONDITION" ;}

}

