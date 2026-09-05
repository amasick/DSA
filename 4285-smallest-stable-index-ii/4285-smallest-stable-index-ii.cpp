class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefixMax(n,0);
        vector<int>suffixMin(n,0);
        int maxi=INT_MIN;
        int mini=INT_MAX;

        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            
            prefixMax[i]=maxi;
          

        }
           for(int i=n-1;i>=0;i--){
         
            mini=min(mini,nums[i]);
            
            suffixMin[i]=mini;

        }
        int score;
        int ans=n;

        for(int i=0;i<n;i++){
            score=prefixMax[i]-suffixMin[i];
            if(score<=k)ans=min(ans,i);
        }
       

        return ans!=n?ans:-1;


        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna