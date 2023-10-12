class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int sumofnumbers = n * (n+1)/2;
        int sum = 0;

        for(int i = 0; i<=n-1; i++){
            sum += nums[i];    
        }

    return sumofnumbers - sum;

    }
   
};