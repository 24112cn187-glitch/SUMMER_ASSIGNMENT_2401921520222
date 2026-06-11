class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n=t.size();

        int i=0;
        int j=0;

        for(int k=0;k<n;k++)
        {
            if(t[k]==s[i])
            {
                i++;
            }
        }

        if(i==s.size()) return true;
        return false;
        
    }
};
