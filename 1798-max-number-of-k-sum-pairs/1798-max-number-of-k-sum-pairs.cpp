class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,h=nums.size()-1,c=0;
        while(l<h){
            if(nums[l]+nums[h] ==k){
                l++;
                h--;
                c++;
            }else if((nums[l]+nums[h]) <k) l++;
            else h--;
        }return c;
    }
};