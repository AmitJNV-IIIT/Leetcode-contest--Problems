class Solution {
public:
   // order of char's in str ,don't matter in this que, NOT SUBSEQUENCE ,ONY FREQ OF CHAR MATTERS
    string minWindow(string s, string t) {
        int ns = s.size(), nt = t.size();
        int minlen = INT_MAX, stind = -1;//ans str starting ind

        //M-1 -> BF->O(N^2)-> FOR LOOPS -> LOGIC SAME 
        //M-2 -> S.W & 2 POINT'S -> O(2*ns+nt) sc:o(26) -> LOGIC SAME -> MORE OPTIMIZED 
        int l = 0, r = 0;
        unordered_map<char, int> mp;// to store the freq of char's
        for (auto it : t)
            mp[it]++;

        int cnt = 0;// cnt the no. of chars of t,that is present in s 
        while (r < ns) {
            // if that char present in str t -> means it;s freq is already > 0 .
            // so we got our one char that is present in t,ans also present in t -> so cnt++
            if (mp[s[r]] > 0)
                cnt++;

            mp[s[r]]--;// if it is not present in t then we don't need it,just decrease it's freq.
           
           //when we got all char's of t in s means -> (cnt == nt)
            while (cnt == nt) {
                // for taking min len valid str for ans
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    stind = l ;
                }
                //phle hmne left poin. pe jo char hai 
                // c-1.wo char t me nhi hai -> ye matter nhi krta hia ans ke liye 
                //uski freq ko decrease kra tha 
                //then jab hum isko apne string se bahar nikal rhe hia toh 
                //iski freq ko increaese kr doh 

                // c-2.wo char t me hai -> ye matter krta hia ans ke liye 
                // inc it's freq -> becuase before it -> it was -ve  
                mp[s[l]]++ ;

                if (mp[s[l]] > 0)//if freq goes +ve then just decrease cnt 
                // one char that is valid -> goes trim from str
                    cnt--;

                l++;//SHRINKING the ans string from left 
            }
            r++;// expand the str from riight
        }
        return stind == -1 ? "" : s.substr(stind, minlen);
    }
};