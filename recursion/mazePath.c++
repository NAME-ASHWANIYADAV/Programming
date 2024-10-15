#include<iostream>
using namespace std;
int maze(int sr , int sc , int er , int ec){
    if(sr> er || sc > ec){
        return 0;
    };
    if (sr == er || sc == ec){
        return 1;
    };
    int rightways = maze(sr, sc+1, er , ec);
    int downways = maze(sr+1,sc,er,ec);
    int  totalways = rightways + downways;
    return totalways;

}
int main (){
    int sr, sc , er , ec ;
    cout<<"Enter the starting row " ;
    cin>> sr;
    cout<<"Enter the starting column " ;
    cin>> sc;
    cout<<"Enter the ending row " ;
    cin>> er;
    cout<<"Enter the ending column " ;
    cin>> ec;
    cout << maze(sr,sc, er , ec);
}