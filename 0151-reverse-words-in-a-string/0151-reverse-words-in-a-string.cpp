class Solution {
public:
    string reverseWords(string s) {
    //     int n=s.size(),i=0;
    //     for(int e=0;e<n;e++){
    //         if(s[e]==' ' ){
    //             reverse(s,i,e-1);
    //             i=e+1;
    //         }
    //     }reverse(s,i,n-1);
    //     reverse(s,0,n-1);
    //     return s;
    // }
    // void reverse(string s,int l,int h){
    //     while(l<=h){
    //         swap(s[l],s[h]);
    //         l++;
    //         h--;
    //     }
     stack<string> st;
        string word = "";
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }
        if (!word.empty()) {
            st.push(word);
        }
        while (st.size() != 1) {
            result += st.top() + " ";
            st.pop();
        }
        result+=st.top();
        return result;
    }
};