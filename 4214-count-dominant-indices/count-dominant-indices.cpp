#include <numeric>
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        int rightSum = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < n - 1; i++) {
            rightSum -= nums[i];          

            int rightCount = n - i - 1;

            if (nums[i] * rightCount > rightSum) {
                count++;
            }
        }

        return count;
    }
};
