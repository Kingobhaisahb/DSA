class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int total = 0;
        vector<int> r1, r2;

        for (int x : nums) {
            total += x;

            if (x % 3 == 1) {
                r1.push_back(x);
            } else if (x % 3 == 2) {
                r2.push_back(x);
            }
        }

        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());

        if (total % 3 == 0) {
            return total;
        }

        int ans;

        if (total % 3 == 1) {
            int option1 = INT_MAX;
            int option2 = INT_MAX;

            if (r1.size() >= 1) {
                option1 = r1[0];               
            }

            if (r2.size() >= 2) {
                option2 = r2[0] + r2[1];       
            }

            int removeVal;
            if (option1 < option2) {
                removeVal = option1;
            } else {
                removeVal = option2;
            }

            ans = total - removeVal;
        }
        else {  
            int option1 = INT_MAX;
            int option2 = INT_MAX;

            if (r2.size() >= 1) {
                option1 = r2[0];           
            }

            if (r1.size() >= 2) {
                option2 = r1[0] + r1[1];       
            }

            int removeVal;
            if (option1 < option2) {
                removeVal = option1;
            } else {
                removeVal = option2;
            }

            ans = total - removeVal;
        }

        return ans;
    }
};
