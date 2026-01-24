class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> result;

        int sum = 0;
        for(int i = 0 ; i<gain.size() ; i++){
            sum=sum+gain[i];
            result.push_back(sum);
        }

        sort(result.begin() , result.end());

        if(result[gain.size() - 1] < 0){
            return 0;
        }
        else{
            return result[gain.size() - 1];
        }
    }
};