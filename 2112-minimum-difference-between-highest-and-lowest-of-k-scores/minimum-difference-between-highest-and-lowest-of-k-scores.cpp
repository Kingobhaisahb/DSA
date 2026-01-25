class Solution {
public:
    int Kspaces(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;

        for (int i = 0; i + k - 1 < nums.size(); i++) {
            int diff = nums[i + k - 1] - nums[i];
            minDiff = min(minDiff, diff);
        }

        return minDiff;
    }

    int minimumDifference(vector<int>& nums, int k) {
        return Kspaces(nums, k);
    }
};
