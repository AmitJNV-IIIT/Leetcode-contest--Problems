class Solution {
public:
    int maxDepth(string s) {
       int r=0,cu=0;
       for(char c:s){
        if(c=='(')
        r=max(r,++cu);
        if(c==')')
        cu--;
       } 
       return r;
    }
};