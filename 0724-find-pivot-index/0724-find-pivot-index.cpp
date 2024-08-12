class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int l_sum=0,r_sum=0,pivot_ind=0;
        //initially lets calculate total sum
        for(int i=0;i<nums.size();i++)
        {
            r_sum+=nums[i];
        }
        //cout<<r_sum<<endl;
        //now iterate through pivot indec and verify if l_sum and r_sum same or not
        for(int i=0;i<nums.size();i++)
        {
            //setting r_sum to sum-nums[pivot_index] assuming if 'i' an pivot index or not
            r_sum-=nums[i];
            if(l_sum==r_sum)
            {
                return i;
            }
           // cout<<l_sum<<" "<<r_sum<<endl;
            //now updating l_sum for next iteration
            l_sum+=nums[i];
           
        }
        //no index found
        return -1;   
    }
};