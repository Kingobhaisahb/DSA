class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            if (a[1] == b[1]) return a[0] > b[0];
            return a[1] < b[1];
        });

        int p1 = -1, p2 = -1; 
        int count = 0;

        for (auto &in : intervals) {
            int start = in[0], end = in[1];

            bool hasP2 = (p2 >= start);    
            bool hasP1 = (p1 >= start);    

            if (hasP1 && hasP2) continue;

            if (hasP1 || hasP2) {
                count += 1;
                int newPoint = end;       
                if (!hasP1) p2 = p1, p1 = newPoint;
                else        p2 = p1, p1 = newPoint;
            }

            else {
                count += 2;
                p2 = end - 1;
                p1 = end;
            }
        }

        return count;
    }
};
