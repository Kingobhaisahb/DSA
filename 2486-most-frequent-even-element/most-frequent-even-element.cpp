class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int, int> freq;

        for (int x : nums) {
            if (x % 2 == 0) {
                freq[x]++;
            }
        }

        if (freq.empty()) return -1;  

        int maxCount = 0;
        int minElement = INT_MAX;

        for (auto p : freq) {
            int value = p.first;    
            int count = p.second;     

            if (count > maxCount) {
                maxCount = count;
                minElement = value;
            }
            else if (count == maxCount) {
                minElement = min(minElement, value);
            }
        }

        return minElement;
    }
};
