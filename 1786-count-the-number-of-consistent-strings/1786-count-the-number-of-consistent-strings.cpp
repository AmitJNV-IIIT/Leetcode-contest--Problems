class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    // support variable
        int res = words.size();
        bool alpha[123] = {};
        // populating alpha
        for (char c: allowed) alpha[c] = true;
        // parsing all the words to see if each character is in alpha
        for (string word: words) {
            // in case we find an unallowed character, we decrease res and break
            for (char c: word) if (!alpha[c]) {
                res--;
                break;
            }
        }
        return res;    
    }
};