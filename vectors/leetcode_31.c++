#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    int k = nums.size() - 2;
    
    // Step 1: Find the largest index k such that nums[k] < nums[k + 1]
    while (k >= 0 && nums[k] >= nums[k + 1]) {
        k--;
    }

    if (k == -1) {
        // If no such index exists, reverse the array to the smallest permutation
        std::reverse(nums.begin(), nums.end());
        return;
    }

    // Step 2: Find the largest index l greater than k such that nums[k] < nums[l]
    int l = nums.size() - 1;
    while (nums[k] >= nums[l]) {
        l--;
    }

    // Step 3: Swap the value of nums[k] with that of nums[l]
    std::swap(nums[k], nums[l]);

    // Step 4: Reverse the sequence from nums[k + 1] up to the last element
    std::reverse(nums.begin() + k + 1, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 1 3 2

    nums = {3, 2, 1};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 1 2 3

    nums = {1, 1, 5};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 1 5 1

    return 0;
}
