class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int ans=INT_MIN;
        int ze=0;
        for(int right=0;right<n;right++){
            if(nums[right] == 0){
                ze++;
            }
            while(ze>1){
                if(nums[left]==0){
                    ze--;
                }
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans==INT_MIN ? 0:ans;
    }
};