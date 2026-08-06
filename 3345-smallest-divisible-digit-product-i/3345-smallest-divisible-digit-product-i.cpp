class Solution {
public:  int digitSum(int n){
    int temp=1;
    while(n>10){
        temp*= n%10;
        n=n/10;
    }
    return temp*(n%10);
}
    int smallestNumber(int n, int t) {


        for(int i=n;i<=100;i++){
            if(digitSum(i) % t==0){
                return i;
                break;
            }
            
        }

      return 0;  
    }
};