class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mini = INT_MAX;
        int maxi = INT_MIN;
        int a = -1, b = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                a = i;
            }

            if (nums[i] > maxi) {
                maxi = nums[i];
                b = i;
            }
        }

        int x = min(a, b);
        int y = max(a, b);

        // Both removed from front
        int front = y + 1;

        // Both removed from back
        int back = n - x;

        // x from front, y from back
        int both = (x + 1) + (n - y);

        return min({front, back, both});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna