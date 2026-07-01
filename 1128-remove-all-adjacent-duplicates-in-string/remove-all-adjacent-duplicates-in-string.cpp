class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans = "";

        int index = 0 ;

        while(index < s.size()){
            if(ans.size() > 0 && ans[ans.size() - 1] == s[index]){
                ans.pop_back();
            }

            else{
                ans.push_back(s[index]);
            }
            index++;
        }

        return ans;


    }
};