class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
         int n = books.size();
        std::vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;  // Base case: no books require 0 height
        
        for (int i = 1; i <= n; ++i) {
            int total_width = 0;
            int max_height = 0;
            for (int j = i; j > 0; --j) {
                total_width += books[j-1][0];
                if (total_width > shelfWidth) {
                    break;
                }
                max_height = std::max(max_height, books[j-1][1]);
                dp[i] = std::min(dp[i], dp[j-1] + max_height);
            }
        }
        
        return dp[n];
    }
//     }intialize a dp array of width (len(books) + 1) with the value of float('inf').
// Run an outer Loop (i from 1 to n)
// Run an inner Loop (j from i to 1)
// This loop tries to place the i-th book on the current shelf or start a new shelf from any previous position.
// total_width accumulates the width of books from j to i.
// If total_width exceeds shelfWidth, break out of the loop.
// max_height tracks the maximum height of the books from j to i
// dp[i] is updated with the minimum height by either placing the book on the current shelf or starting a new shelf from any position j-1.
// Complexity
// Time complexity: O(N**2)

// Space complexity:O(N)
};