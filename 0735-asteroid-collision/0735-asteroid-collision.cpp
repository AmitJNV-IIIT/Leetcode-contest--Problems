class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      int peek = -1; // Virtual stack

        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] > 0) {
                asteroids[++peek] = asteroids[i]; // Push positive asteroid
                continue; 
            }

            bool isNegSafe = true;

            while (peek >= 0 && asteroids[peek] > 0) {
                if (asteroids[peek] < std::abs(asteroids[i])) {
                    peek--; // Positive destroyed, negative keeps going
                } else if (asteroids[peek] > std::abs(asteroids[i])) {
                    isNegSafe = false; // Negative destroyed
                    break; 
                } else { // Both destroyed
                    isNegSafe = false;
                    peek--;
                    break;
                }
            }

            if (isNegSafe) {
                asteroids[++peek] = asteroids[i];
            }
        }

        asteroids.resize(peek + 1); // Resize to contain only the survivors
        return asteroids;  
    }
};