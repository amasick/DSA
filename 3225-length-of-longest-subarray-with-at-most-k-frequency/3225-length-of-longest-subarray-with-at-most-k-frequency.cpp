class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int j = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;

            while (freq[nums[i]] > k) {
                freq[nums[j]]--;
                j++;
            }

            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna