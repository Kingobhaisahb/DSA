class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> zeros;
        for (int i = 0; i < n; ++i)
            if (s[i] == '0') zeros.push_back(i);
        int Z = zeros.size();
        long long ans = 0;

        for (int l = 0; l < n; ++l) {
            int idx = lower_bound(zeros.begin(), zeros.end(), l) - zeros.begin();

            for (int k = 0; k <= 200; ++k) {
                int rmin, rmax;
                if (k == 0) {

                    rmin = l;
                    rmax = (idx < Z ? zeros[idx] - 1 : n - 1);
                } else {

                    if (idx + k - 1 >= Z) break;
                    rmin = zeros[idx + k - 1];
                    rmax = (idx + k < Z ? zeros[idx + k] - 1 : n - 1);
                }

                int minLen = k * (k + 1);
                int needR = l + minLen - 1;

                if (needR > rmax) continue;

                if (needR <= rmin) ans += (rmax - rmin + 1);
                else ans += (rmax - needR + 1);
            }
        }

        return (int)ans;
    }
};
