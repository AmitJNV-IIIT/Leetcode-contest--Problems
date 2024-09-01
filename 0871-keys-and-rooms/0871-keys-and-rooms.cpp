class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       unordered_set<int> visited;
        queue<int> to_visit;
        to_visit.push(0);
        while(!to_visit.empty()) {
            int curr = to_visit.front();
            to_visit.pop();
            visited.insert(curr);
            for (int k : rooms[curr]) if (visited.find(k) == visited.end()) to_visit.push(k);
        }
        return visited.size() == rooms.size(); 
    }
};
//While the queue is not empty, meaning we have more rooms to visit, we check all keys in the current room, if we haven't visit all of these rooms, push it to the queue.