class Solution {
public: 

    int expand(string s, int i , int j){
        int count = 0 ;

        while(i>=0 && j<s.size() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0 ;

        for(int i = 0 ; i<s.size() ; i++){

            int j = i;
            int oddKaAnswer = expand(s,i,j);

            j = i + 1;
            int evenKaAnswer = expand(s,i,j);

            totalCount += oddKaAnswer + evenKaAnswer ;
        }

        return totalCount;
    }
};