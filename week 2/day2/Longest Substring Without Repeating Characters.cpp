class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int count=0;
        int ans=0;

        int n=s.size();
        if(n==1) return 1;

        int i=0;
        int j=0;
        unordered_set<char>m;

        while(i<=j)
        {
            while(j<n)
            {
                if(m.find(s[j])!=m.end())
                {
                    ans=max(ans,count);
                    break;
                }

                else
                {
                    m.insert(s[j]);
                    count++;
                    j++;
                }
            }
            ans=max(ans,count);
            m.erase(s[i]);
            count--;
            i++;
        }

        
        return ans;
        
    }
};
