class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        unordered_set<long long> st;

        // store obstacles
        for(auto &o : obstacles) {
            long long key = ((long long)o[0] << 32) | (o[1] & 0xffffffff);
            st.insert(key);
        }

        // directions: N, E, S, W
        vector<pair<int,int>> dir = {
            {0,1}, {1,0}, {0,-1}, {-1,0}
        };

        int x = 0, y = 0, d = 0;
        int maxDist = 0;

        for(int cmd : commands) {

            if(cmd == -1) {
                d = (d + 1) % 4; // right
            } 
            else if(cmd == -2) {
                d = (d + 3) % 4; // left
            } 
            else {
                // move step by step
                for(int i = 0; i < cmd; i++) {

                    int nx = x + dir[d].first;
                    int ny = y + dir[d].second;

                    long long key = ((long long)nx << 32) | (ny & 0xffffffff);

                    if(st.count(key)) break;

                    x = nx;
                    y = ny;

                    maxDist = max(maxDist, x*x + y*y);
                }
            }
        }

        return maxDist;
    }
};