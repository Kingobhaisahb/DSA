class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        
        int n = encodedText.size();
        if(rows == 1) return encodedText;

        int cols = n / rows;
        string result = "";

        // start from each column
        for(int c = 0; c < cols; c++) {
            
            int i = 0, j = c;

            while(i < rows && j < cols) {
                result += encodedText[i * cols + j];
                i++;
                j++;
            }
        }

        // remove trailing spaces
        while(!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};