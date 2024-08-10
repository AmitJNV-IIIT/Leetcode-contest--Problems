class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0, n = nums.size(), ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                ans = max(ans, left + right);
                left = right;
                right = 0;
            }else{
                right++;
            }
            
        }
        ans = max(ans, left + right);
        return ans == n ? ans-1 : ans;
    }
};