class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> mp;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans; } 
//     }We create a string variable called word and assign it the value of the current word ("eat" in this case).

// Next, we sort the characters in word using the sort() function. After sorting, word becomes "aet".

// Grouping the Anagram
// We insert word as the key into the mp unordered map using mp[word], and we push the original word ("eat") into the vector associated with that key using mp[word].push_back(x), where x is the current word.

// Since "aet" is a unique sorted representation of all the anagrams, it serves as the key in the mp map, and the associated vector holds all the anagrams.

// For the given example, the mp map would look like this after processing all the words:

// {
//   "aet": ["eat", "tea", "ate"],
//   "ant": ["tan", "nat"],
//   "abt": ["bat"]
// }
// Creating the Result
// We initialize an empty vector called ans (short for answer) to store the final result.

// We iterate through each key-value pair in the mp map using a range-based for loop. For each pair, we push the vector of anagrams (x.second) into the ans vector.
// For the given example, the ans vector would look like this:

// [
//   ["eat", "tea", "ate"],
//   ["tan", "nat"],
//   ["bat"]
// ]
};