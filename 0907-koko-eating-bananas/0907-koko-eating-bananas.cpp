class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = (left + right) / 2;
            if (canEatAll(piles, mid, h)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
    
    bool canEatAll(vector<int>& piles, int speed, int h) {
        int time = 0;
        for (int pile : piles) {
            time += (pile - 1) / speed + 1;
            if (time > h) {
                return false;
            }
        }
        return true;
    }
};
// Check if Koko can eat all the bananas at the current speed (middle pointer) within h hours using the canEatAll method.
// c. If Koko can eat all the bananas at the current speed, update the right pointer to the middle pointer using right = mid.
// d. If Koko cannot eat all the bananas at the current speed, update the left pointer to mid + 1.
// Once the left pointer is equal to the right pointer, return the left pointer as the minimum speed at which Koko can eat all the bananas within h hours.
// The canEatAll method calculates the total time required to eat all the piles using the given speed. If the total time is greater than h, the method returns false, otherwise, it
// returns true.
// Complexity
// Time complexity:
// The binary search algorithm has a time complexity of O(logn), where n is the maximum number of bananas in a pile. The canEatAll function has a time complexity of O(n), where n is the number of piles. Therefore, the overall time complexity of the solution is O(nlogn).

// Space complexity:
// The space complexity of the solution is O(1), as we only use a constant amount of extra space.