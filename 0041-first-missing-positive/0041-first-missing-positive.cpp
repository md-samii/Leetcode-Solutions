class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
    int i = 0;

    while (i < n) {
        // First check range BEFORE computing nums[i] - 1
        if (nums[i] > 0 && nums[i] <= n) {
            int correctIndex = nums[i] - 1;

            if (nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
                continue;   // stay at same index after swap
            }
        }
        i++; // move forward only when no swap happens
    }

    // Find the first missing positive
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
    }
};