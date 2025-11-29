class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;

        for(int i = 0 ; i<nums.size() ; i++){
            sum = sum + nums[i];
        }

        while(sum % k != 0){
            sum--;
            count++;
        }

        return count;
    }
};