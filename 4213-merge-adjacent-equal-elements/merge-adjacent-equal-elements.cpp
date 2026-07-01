class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        vector<long long> result;

        for (int x : nums) {
            result.push_back(x);

            while (result.size() >= 2) {
                int n = result.size();
                
                if (result[n - 1] == result[n - 2]) {
                    long long val = result[n - 1];
                    result.pop_back();
                    result.pop_back();
                    result.push_back(val * 2);
                }
                else {
                    break;
                }
            }
        }

        return result;
    }
};
