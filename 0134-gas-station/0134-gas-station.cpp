class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total_surplus = 0; // it will give us a difference b/w gas & cost
        int surplus = 0; // our tank
        int start = 0; // and the index of gas station
        
        for(int i = 0; i < n; i++){
            total_surplus += gas[i] - cost[i];
            surplus += gas[i] - cost[i];
            if(surplus < 0){ // if the tank goes -ve
                surplus = 0; // reset our tank
                start = i + 1; // and update the stating gas station
            }
        }
        return (total_surplus < 0) ? -1 : start;
    }
};
// Let's see it Brute Force Solution :

// {
//         int n = gas.length;
//         for(int i = 0; i < n; i++){
//             int totalFuel = 0;
//             int stopCount = 0, j = i;
//             while(stopCount < n){
//                 totalFuel += gas[j % n] - cost[j % n];
//                 if(totalFuel < 0) break; // whenever we reach -ve
//                 stopCount++;
//                 j++;
//             }
//             if(stopCount == n && totalFuel >= 0) return i; // cover all the stops & our fuel left is 0 or more than that
//         }
//         return -1;
// ANALYSIS :-

// Time Complexity :- BigO(N^2)

// Space Complexity :- BigO(1)

// Let's Improve this solution which runs linear in O(N) time.

// As Inorder to improve the solution we have to look into where it's wasting time

// So, our brute-force ran a simulation, as soon as a gas station became -ve. It's stop and move to the next station as a starting point. But this is inefficient and inorder for us to understand why? we have to look at what makes car stop.
// Let's say for this example the car start at 0 and it's able to make at 3 gas station. And after trying to make it at 4th station its run out of gas.
// image

// Once the brute force solution realises it can make this trip, it's start over simulating with this gas station as the starting point.
// But this next simulation is useless and wasting time

// Here's why,
// imageWell we already know that these3 gas stations and trips weren't successfull. Which means comparing our fuel accumulation to our fuel consumption we were at some kind of surplus or at the very least we were breaking even with exactly enough fuel to make every trip.

// This is because if we were at some kind of deficit then our car would have already run on gas sometime earlier. So, this means on the last trip because we ran out of fuel we were in some kind of deficit.
// So, as we can't make the trip starting at very beginning we can't make over here at index 1 or index 2 or index 3

// So what does this means in terms of our algorithm, it means that we know if we run out of fuel say at some ith gas station. All the gas station between ith and starting point are bad starting point as well.
// So, this means we can start trying at next gas station on the i + 1 station. So, hopefully now you understand how this O(N) solution will takes place.