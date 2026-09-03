class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        // if all are odd or even then pass
          int minO=INT_MAX;
        int minE=INT_MAX;

        bool allO=true;
        bool allE=true;
        for(auto ele:nums){
           
            if(ele%2==0){
                minE=min(minE,ele);
                
                allO=false;
            }
            else {
                 minO=min(minO,ele);
                
                allE=false;

            }
        }
        bool convO=true;
        bool convE=true;
        if(!allO and !allE)convE=false;
        if(minE<minO)convO=false;

        return allE||allO || convO || convE;
      
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna