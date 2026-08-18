class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> freq(51, 0);
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            vector<bool> seen(51, false);

            for (int j = i; j < i + k; j++) {
                if (!seen[nums[j]]) {
                    freq[nums[j]]++;
                    seen[nums[j]] = true;
                }
            }
        }

        for (int i = 50; i >= 0; i--) {
            if (freq[i] == 1)
                return i;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna