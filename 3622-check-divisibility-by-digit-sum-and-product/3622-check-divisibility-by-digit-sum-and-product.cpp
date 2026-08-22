class Solution {
public: int sum=0;
        int product=1;
void helper(int n){

    while(n!=0)
    {
        int t=n%10;
        n=n/10;
        sum+=t;
        product*=t;
    }



}

    bool checkDivisibility(int n) {
        helper(n);
        int sumP=sum+product;
        return n%sumP ==0;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna