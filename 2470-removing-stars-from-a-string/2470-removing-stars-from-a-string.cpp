class Solution {
public:
    string removeStars(string s) {stack<int>st;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();    
        }
        reverse(ans.begin(),ans.end());
    return ans;
    // int k=0;
    // string r="";
    // for(int i=0;i<s.size()-1;i++){
    //     if(s[i+1]!='*'){
    //         if(s[i]!='*')
    //         r+=s[i];
    //         else
    //         r+=s[i-2];
    //     }else
    //     {
    //         i++;
    //     }
    // }    return r;
    }
};