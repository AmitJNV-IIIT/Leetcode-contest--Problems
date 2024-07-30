class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int ca=0,r=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a') ca++;
            else r=min(r+1,ca);
        }return r;
    }
};