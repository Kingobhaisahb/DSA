class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int size = nums.size();

        int maxVal = nums[size - 1] + nums[size - 2] - nums[0];

        return maxVal;
    }
};