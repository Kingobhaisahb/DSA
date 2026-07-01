class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        vector <int> result;

        int onGoingSum = 0;

        for(int i = 0 ; i<n ; i++){
            onGoingSum = onGoingSum + nums[i];
            result.push_back(onGoingSum);
        }

        return result;
    }
};