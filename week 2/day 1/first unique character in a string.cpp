class Solution {
public:
    int firstUniqChar(string s) {

        int n=s.size();
        string a="";

        for(int i=0;i<n;i++)
        {
            if(a.find(s[i]) != string::npos) continue;
            if(s.substr(i+1).find(s[i])==string::npos)
            {
                return i;
            }
            else 
            {
                a=a+s[i];    
            }
        }
        return -1;
    }
};
