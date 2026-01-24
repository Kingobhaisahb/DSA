class Solution {
public:

    int findPivotIndex(vector<int>& nums,int a){
        int sum1 = 0;

        for(int i = 0 ; i<a ; i++){
            sum1 = sum1 + nums[i];
        }

        int sum2 = 0;
        for(int i = a + 1 ; i<nums.size() ; i++){
            sum2 = sum2 + nums[i];
        }

        return sum1 == sum2;
    }

    int pivotIndex(vector<int>& nums) {
        for(int a = 0 ; a<nums.size() ; a++){
            if(findPivotIndex(nums,a)){
                return a;
            }
        }
        return -1;
    }
};