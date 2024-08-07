class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size(),m=0,p=0;
        for(int i=0;i<n;i++){
            p+=gain[i];
            m=max(m,p);
        }return m;
    }
};