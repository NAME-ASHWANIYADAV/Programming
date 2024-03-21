#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE LENGTH OF THE RECTANGLE.\n";
    int x;
    cin>>x;
     cout<<"ENTER THE BREADTH OF THE RECTANGLE.\n";
    int y;
    cin>>y;

float area =x*y;

float perimeter= 2*(x+y);
if (area > perimeter)
{
    cout<<"Numerically area of this RECTANGLE is larger than its perimeter";
}
 else if (area = perimeter)
{
    cout<<"Numerically area of this RECTANGLE is equal to its perimeter";
}
if (area < perimeter)
{
    cout<<"Numerically area of this RECTANGLE is smaller than its perimeter";
}

    
}   