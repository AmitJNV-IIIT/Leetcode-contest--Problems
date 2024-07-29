class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),k=0;
        set<int>s;
        for(int i=1;i<n;i++){
          if(nums[k]!=nums[i]){
            k++;
            nums[k]=nums[i];
          }

    }return k+1;
    }
};