class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int n = s.length();
        int currCount = 0 ;
        int maxCount = 0;

        for(int i = 0 ; i<k ; i++){
            if(isVowel(s[i])){
                currCount++;
            }
        }
        maxCount = currCount;

        for(int right = k ; right < n ; right++){
            if(isVowel(s[right])){
                currCount++;
            }
            if(isVowel(s[right - k])){
                currCount--;
            }
            if(currCount > maxCount){
                maxCount = currCount;
            }
        }
        return maxCount;
    }
};