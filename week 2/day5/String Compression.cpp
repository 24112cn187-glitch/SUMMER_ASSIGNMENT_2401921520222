class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;   
        int k = 0;   

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            
            chars[k++] = curr;

            
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[k++] = c;
                }
            }
        }

        return k;
    }
};
