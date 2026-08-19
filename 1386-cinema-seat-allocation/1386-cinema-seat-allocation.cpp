class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        unordered_map<int, vector<int>> mp;

        // Store reserved seats row-wise
        for (auto &seat : reservedSeats) {
            mp[seat[0]].push_back(seat[1]);
        }

        // Rows with no reservations can always accommodate 2 groups
        int ans = (n - mp.size()) * 2;

        // Process only rows having reservations
        for (auto &[row, seats] : mp) {
            
            bool left = true;   // [2,3,4,5]
            bool middle = true; // [4,5,6,7]
            bool right = true;  // [6,7,8,9]

            for (int seat : seats) {
                
                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 4 && seat <= 7)
                    middle = false;

                if (seat >= 6 && seat <= 9)
                    right = false;
            }

            // Two non-overlapping groups can be placed
            if (left && right) {
                ans += 2;
            }
            // At least one block is available
            else if (left || middle || right) {
                ans += 1;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna