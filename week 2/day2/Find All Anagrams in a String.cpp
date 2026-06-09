class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        int n1 = s.size(), n2 = p.size();
        if(n1 < n2) return ans;

        vector<int> freqP(150, 0), freqS(150, 0);

        
        for(int i = 0; i < n2; i++) {
            freqP[p[i]]++;
            freqS[s[i]]++;
        }

        // if(freqP == freqS) ans.push_back(0);
        int k=0;
        for(int i = n2; i < n1; i++) {

            if(freqP == freqS) {
                ans.push_back(k);
            }
            freqS[s[i]]++;                 
            freqS[s[k]]--;  
            k++;          

            
        }

        if(freqP == freqS) {
                ans.push_back(k);
            }

        return ans;
    }
};
