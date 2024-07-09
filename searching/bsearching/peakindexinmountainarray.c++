#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int left = 0, right = A.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (A[mid] > A[mid + 1])
                right = mid;
            else
                left = mid + 1;
        }
        return right;
    }
};

int main() {
    Solution solution;
    vector<int> A = {1, 2, 3, 5, 6, 4, 3, 2, 1};
    int peakIndex = solution.peakIndexInMountainArray(A);
    cout << "Peak index: " << peakIndex << endl;
    return 0;
}
