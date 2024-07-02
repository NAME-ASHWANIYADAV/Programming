#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
float min(float a , float b){
    if(a>b){ 
        return b; 
    } else{ 
        return a; 
    }
}

float max(float a , float b){
    if(a<b){ 
        return b; 
    } else{ 
        return a; 
    }
}

int main (){
    int arr[] = {5,3,10};
    int n =3;
    for(int i =0; i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = true;
    float kmax = (float)(INT_MAX);
    float kmin = (float)(INT_MIN);
    for(int i =0;i<n-1;i++){
        if(arr[i]>= arr[i+1]){
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else
           { kmax = min(kmax,(arr[i]+arr[i+1])/2.0);}
         if(kmin>kmax){
        flag = false;
        break;
    }
    }
   if(flag ==false)cout<<-1;
   else{
    cout<<"Range of k is [ "<<(int)kmin +1<<","<<(int)kmax<<" ]";
   }

}