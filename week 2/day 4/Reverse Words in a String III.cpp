class Solution {
public:
    string reverseWords(string s) {

        string ans = "";

        stringstream ss(s);
        string word;
        while (ss >> word) {

            reverse(word.begin(), word.end());
            ans += word;
            ans +=" ";
        }

        
        return ans.substr(0,ans.length()-1);
    }
};
