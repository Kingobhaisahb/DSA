class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        vector<int> result(nums.size());
        int k = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (nums[i] > 0) {
                k = i + nums[i];
                k = k % n;
                result[i] = nums[k];
            }
            else if (nums[i] < 0) {
                k = i + nums[i];
                k = k % n;
                if (k < 0) {
                    k += n;
                }
                result[i] = nums[k];
            }
            else { // nums[i] == 0
                result[i] = nums[i];   // ✅ FIX HERE
            }
        }
        return result;
    }
};
