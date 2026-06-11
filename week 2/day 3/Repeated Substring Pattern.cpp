class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n=s.size();

        string h="";
        h+=s[0];
        int i=1;

        while(i<s.size() && h.size()<=s.size()/2)
        {
            string a=h;
            

            while(a.size()<s.size())
            {
                a+=h;
            }

            if(a==s) return true;

            else 
            {
                h+=s[i];
                i++;
            }
        }

        
        return false;
        
    }
};
