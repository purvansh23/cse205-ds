class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        int minimum= min(nums[0],nums[1]);
        int maximum= max(nums[0],nums[1]);
        int c=nums[2];
        
        if(c<maximum && c>minimum) return c;
        if(c<minimum) return minimum;
        if(c>maximum)return maximum;

        return -1;
    }
};