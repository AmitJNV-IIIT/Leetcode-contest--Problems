class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int i=0,h=numbers.size()-1;
     while(i<h){
        int t=numbers[i]+numbers[h];
        if(t==target)
        return {i+1,h+1};
        else if(t>target)h--;
        else i++;
     }
     return {-1,-1};

    }
};