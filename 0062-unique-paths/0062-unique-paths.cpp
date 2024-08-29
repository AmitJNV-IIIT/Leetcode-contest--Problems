class Solution {
public:
    int uniquePaths(int m, int n) {
      long ans = 1;
        for(int i = m+n-2, j = 1; i >= max(m, n); i--, j++) 
            ans = (ans * i) / j;
        return ans;//m+n-2 C m-1 tc o(min(m,n))  
    }
};