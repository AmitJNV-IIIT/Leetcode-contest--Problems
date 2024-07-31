class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(auto e:nums){
            if(i==0||i==1||nums[i-2]!=e){
                nums[i]=e;
                i++;
            }
        }return i;
//         i == 0: This condition ensures that the first element is always included in the modified vector.
// i == 1: This condition ensures that the second element is always included in the modified vector.
// nums[i-2] != ele: This condition checks if the current element ele is not the same as the element two positions before the current position i. This ensures that only two occurrences of any element are included in the modified vector.
// If any of the above conditions are met, copy the current element ele to the nums[i] position in the modified vector, and increment i by 1 to move to the next position.

// Repeat this process for all elements in the nums vector.

// Finally, return the value of i, which represents the length of the modified vector with duplicates removed.

// This approach effectively modifies the nums vector in place, removing duplicates while keeping at most two occurrences of each element. The function returns the length of the modified vector, which can be used to access the unique elements in the first i positions of the vector
        // int n=nums.size(),r=0;
        // map<int,int>m;
        // for(int i=0;i<n;i++){
        //     m[nums[i]]++;
        // }for(int i=0;i<n;i++){
        //     if(m[nums[i]]>=2){
        //        int d=2;
        //         if(d>0){
        //             nums[r++]=m[nums[i]];
        //             d--;
        //         }
        //     }else
        //     nums[r++]=m[nums[i]];
        // }return r;
    }
};