class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map <int,int> freq;

        for(int i = 0 ; i<arr.size() ; i++){
            freq[arr[i]]++;
        }

        int maxLucky = -1;

        for(auto number : freq){
            if(number.first == number.second){
                maxLucky = max(number.first,maxLucky);
            }
        }

        return maxLucky;
    }
};