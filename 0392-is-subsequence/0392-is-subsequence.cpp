class Solution {
public:
    bool isSubsequence(string s, string t) {
         int i=0 , j=0;
        string str="";
        while(i<s.size() && j<=t.size())
        {
            if(s[i]==t[j])
            {
                str+=t[j];
                i++,j++;
            }
            else
            {
                j++;
            }
        }
        if(s[i]==str[j]) return true;
        else return false; 
    }
};