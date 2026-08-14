class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int ze=0;
        int left=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                ze++;
            }
            while(ze>k){
                if(nums[left]==0){
                    ze--;
                }
                left++;
            }
             ans = max(ans, right - left + 1);
        }
        return ans;
    }
};