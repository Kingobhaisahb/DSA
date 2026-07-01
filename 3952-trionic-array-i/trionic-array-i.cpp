class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int p = -1, q = -1;

        for (int i = 0; i + 1 < n; i++) {
            if (nums[i] < nums[i + 1]) continue;
            p = i;
            break;
        }
        if (p <= 0) return false;

        for (int i = p; i + 1 < n; i++) {
            if (nums[i] > nums[i + 1]) continue;
            q = i;
            break;
        }
        if (q <= p) return false;

        for (int i = q; i + 1 < n; i++) {
            if (nums[i] >= nums[i + 1]) return false;
        }

        return true;
    }
};
