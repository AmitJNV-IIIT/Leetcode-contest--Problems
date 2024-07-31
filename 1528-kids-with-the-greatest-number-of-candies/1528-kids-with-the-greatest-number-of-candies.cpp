class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int n=candies.size(),m=candies[0];;
     vector<bool>r;
     for(int i=0;i<n;i++){
        
        if(candies[i]>m)
        m=candies[i];
     }
     for(int i=0;i<n;i++){
        if((candies[i]+extraCandies) <m)
        r.push_back(false);
        else r.push_back(true);
     }   
     return r;
    }
};