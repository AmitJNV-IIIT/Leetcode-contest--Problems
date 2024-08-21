class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]++;
            mp[s[i]]--;
        }
        for(char ch='a' ;ch<='z';ch++)
        {
            if(mp[ch])
            {
                return ch;
            }
        }
        return ' ';
    }
};