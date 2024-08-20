class Solution {
public:
int helper(int i, int M, vector<int>& piles, vector<vector<int>>& dp, vector<int>& suffixSum) {
        int n = piles.size();

        // Base case: If we're at the last pile, return the sum of the remaining piles
        if (i >= n) {
            return 0;
        }
        // If we've already calculated this state, return the stored value
        if (dp[i][M] != -1) {
            return dp[i][M];
        }

        int maxStones = 0;

        // Try taking all possible X (1 <= X <= 2 * M)
        for (int X = 1; X <= 2 * M; ++X) {
            if (i + X > n) {
                break; // Don't go out of bounds
            }

            // Remaining stones after taking X piles
            int opponentScore = helper(i + X, max(M, X), piles, dp, suffixSum);

            // Maximum stones Alice can get if she takes X piles
            maxStones = max(maxStones, suffixSum[i] - opponentScore);
        }

        // Store and return the result for this state
        dp[i][M] = maxStones;
        return dp[i][M];
    }
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        // dp array to store the results
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        // suffixSum to quickly compute the sum of remaining piles
        vector<int> suffixSum(n, 0);

        // Calculate the suffix sum
        suffixSum[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffixSum[i] = suffixSum[i + 1] + piles[i];
        }

        // Call the recursive helper function
        return helper(0, 1, piles, dp, suffixSum);
    }
    // int stoneGameII(vector<int>& piles) {
    //    int n = piles.size();
        
    //     vector<vector<int>> dp(n, vector<int>(n + 1, 0));
    //     vector<int> suffixSum(n, 0);
    //     suffixSum[n - 1] = piles[n - 1];
        
    //     for (int i = n - 2; i >= 0; i--) {
    //         suffixSum[i] = suffixSum[i + 1] + piles[i];
    //     }
        
    //     for (int i = n - 1; i >= 0; i--) {
    //         for (int m = 1; m <= n; m++) {
    //             if (i + 2 * m >= n) {
    //                 dp[i][m] = suffixSum[i];
    //             } else {
    //                 for (int x = 1; x <= 2 * m; x++) {
    //             dp[i][m] = max(dp[i][m], suffixSum[i] - dp[i + x][max(m, x)]);
    //                 }
    //             }
    //         }
    //     }
        
    //     return dp[0][1]; 
    // }
};