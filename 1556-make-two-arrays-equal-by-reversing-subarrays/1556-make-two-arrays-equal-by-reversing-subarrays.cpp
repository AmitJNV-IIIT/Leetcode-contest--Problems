class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
         map<int,int>mp1 ;
        map<int,int>mp2 ;
        for(auto &x : target){
            mp1[x]++;
        }
        for(auto &x : arr){
            mp2[x]++;
        }
        auto it2 = mp2.begin() ;
        for(auto & it1 :mp1){
            if(it1.first != it2->first || it1.second != it2->second)return false ;
            it2++;
        }
        return true ;
        // set<int>s(arr.begin(),arr.end());
        // int n=target.size(),i;
        // for(i=0;i<n;i++){
        //     if(s.find(target[i])==s.end())
        //     return false;
        // }return 1;
    }
};