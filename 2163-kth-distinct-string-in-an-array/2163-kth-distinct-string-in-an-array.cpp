class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        for(auto v:arr)
m[v]++;
for(auto v:arr){
    if(m[v]==1){
        k--;
        if(k==0)
        return v;
    }
}return "";
    }
};