class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

       int n=nums1.size();
       int minEven=INT_MAX;
       int minOdd=INT_MAX;

       bool allEven=true;
       bool allOdd=true;
       bool convToOdd=true;

       for(int i=0;i<n;i++){
       
      
        if(nums1[i]%2==0)
        {
             minEven=min(minEven,nums1[i]);
            allOdd=false;
        }
        else 
        {
              minOdd=min(minOdd,nums1[i]);
            allEven=false;
        }
       }
       
       //convert to even not poosible if there's exist a odd

       //convert to odd if minimum even is greater than minimum odd;

       if(minOdd!=INT_MAX and minEven!=INT_MAX and minOdd>minEven)convToOdd=false;
       return convToOdd || allEven || allOdd;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna