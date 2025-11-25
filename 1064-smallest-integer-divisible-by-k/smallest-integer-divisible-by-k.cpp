class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0 && k % 5 == 0){
            return -1;
        }

        unordered_set <int> seen;
        int rem = 0 ;
        int length = 0;

        while(true){
            rem = (rem * 10 + 1) % k;
            length++;

            if(rem == 0){
                return length;
            }

            if (seen.count(rem)) return -1; 
            
            seen.insert(rem);
        }
    }
};