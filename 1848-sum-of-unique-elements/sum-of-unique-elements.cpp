class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int,int> freq;

        for(int i = 0 ; i<nums.size() ; i++){
            freq[nums[i]]++;
        }

        int sum = 0 ;
        for(auto &p : freq){
            if(p.second == 1){
                sum = sum + p.first;
            }
        }
        return sum;
    }
};