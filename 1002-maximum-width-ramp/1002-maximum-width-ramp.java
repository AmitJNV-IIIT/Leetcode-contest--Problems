class Solution {
    public int maxWidthRamp(int[] nums) {
       int ans = 0;
        int n = nums.length;

        // Stack to store the pairs of (value, index) in decreasing order
        Stack<int[]> st = new Stack<>();
        
        // First pass: store elements in decreasing order
        for (int i = 0; i < n; i++) {
            if (st.isEmpty() || st.peek()[0] > nums[i]) {
                st.push(new int[]{nums[i], i});
            }
        }

        // Second pass: start from the last index to find the largest ramp
        for (int i = n - 1; i >= 0; i--) {
            while (!st.isEmpty() && nums[i] >= st.peek()[0]) {
                int index = st.peek()[1];
                ans = Math.max(ans, i - index);
                st.pop();
            }
        }

        return ans;  
    }
}