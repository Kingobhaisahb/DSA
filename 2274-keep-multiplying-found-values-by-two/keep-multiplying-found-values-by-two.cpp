class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_set <int> store (nums.begin() , nums.end());

        while(store.find(original) != store.end()){
            original = original * 2;
        }

        return original;


    }
};