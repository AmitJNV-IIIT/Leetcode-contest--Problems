class Solution {
public:
    int candy(vector<int>& ratings) {
         int n=ratings.size();
        vector<int>candies(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i-1]<ratings[i]){
                candies[i]=candies[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candies[i]=max(candies[i],candies[i+1]+1);
            }
        }
        int candy=0;
        for(auto it:candies){
            candy+=it;
        }
        return candy;
    //    int s=ratings.size(),res=s;
    //    for(int i=1;i<s;i++){
    //     if(ratings[i-1]==ratings[i]) continue;
    //     else res++;[1,3,2,2,1] op 7 my 8
    //    } return res;
    }
};