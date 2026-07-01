class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> first(26, -1), last(26, -1);

        // Track first and last occurrence of each character
        for (int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            if (first[c] == -1) first[c] = i;
            last[c] = i;
        }

        int ans = 0;

        // For every character as the outer characters of palindrome
        for (int c = 0; c < 26; c++) {
            if (first[c] != -1 && last[c] - first[c] > 1) {
                unordered_set<char> middle;

                // Collect all distinct chars between the first and last
                for (int i = first[c] + 1; i < last[c]; i++) {
                    middle.insert(s[i]);
                }

                ans += middle.size();
            }
        }

        return ans;
    }
};
