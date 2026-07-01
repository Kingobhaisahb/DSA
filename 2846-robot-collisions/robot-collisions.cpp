class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        
        int n = positions.size();
        
        vector<int> idx(n);
        for(int i = 0; i < n; i++) idx[i] = i;

        // sort indices based on positions
        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return positions[a] < positions[b];
        });

        stack<int> st; // stores indices (original indices)

        for(int id : idx) {

            if(directions[id] == 'R') {
                st.push(id);
            } 
            else {
                while(!st.empty() && directions[st.top()] == 'R') {

                    int top = st.top();

                    if(healths[top] > healths[id]) {
                        healths[top]--;
                        healths[id] = 0;
                        break;
                    } 
                    else if(healths[top] < healths[id]) {
                        healths[id]--;
                        healths[top] = 0;
                        st.pop();
                    } 
                    else {
                        healths[top] = 0;
                        healths[id] = 0;
                        st.pop();
                        break;
                    }
                }

                if(healths[id] > 0) {
                    st.push(id);
                }
            }
        }

        // collect survivors in original order
        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(healths[i] > 0) {
                result.push_back(healths[i]);
            }
        }

        return result;
    }
};