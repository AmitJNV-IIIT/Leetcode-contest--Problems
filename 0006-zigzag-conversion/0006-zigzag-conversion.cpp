class Solution {
public:
    string convert(string s, int numRows) {
      if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int idx = 0, d = 1;//idx current row index//d 1 downword to add in row index
        vector<vector<char>> rows(numRows);

        for (char c : s) {
            rows[idx].push_back(c);
            if (idx == 0) {
                d = 1;
            } else if (idx == numRows - 1) {
                d = -1;// to go upward idx-d=3-1,2-1,1-1
            }
            idx += d;
        }

        string result;
        for (const auto& row : rows) {
            for (char c : row) {
                result += c;
            }
        }

        return result;    
    }
};