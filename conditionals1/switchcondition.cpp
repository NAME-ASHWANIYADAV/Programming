#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER MONTH NUMBER\n ";
    int x;
    cin>>x;
    //1 3 5 7 8 10 12 -> 31 days
    // 4 6 9 11 -> 30 days
    // 2 -> 28 days
            switch(x<=7 && x&2==0){
                    case 1 :
                    cout<<"31";
            }
switch(x>=8 && x%2==0)  {
    case 1 :
                    cout<<"31";
}      
    switch (x==4 || x==6 || x==9 || x==11)
    {
    case 1 :
                    cout<<"30";
        break;
    }
    switch (x)
    {
    case 2:
    cout<<"28";
    } 
}