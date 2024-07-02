#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int findcontentchildren(vector<int>& g , vector<int> & s){
        sort(g.begin(),g.end());
        sort(s.begin(), s.end());
        int i = 0, j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>= g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};

int main(){
    Solution solution;
    vector<int> g = {1,2,3};
    vector<int> s = {1,2};
    int result = solution.findcontentchildren(g,s);
    cout<<"Number of children satisfied: "<<result<<endl;
    return 0;
}