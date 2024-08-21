class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int n:nums)
        m[n]++;
        for(auto i:m){
            if(i.second==1)
            return i.first;
        }
        return 0;
    }
};