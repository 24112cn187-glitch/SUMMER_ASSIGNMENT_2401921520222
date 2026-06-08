class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n=ransomNote.size();
        int z=magazine.size();

        unordered_map<char,int>m;

        for(int i=0;i<z;i++)
        {
            m[magazine[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(m.find(ransomNote[i]) == m.end())
            {
                return false;
            }

            else 
            {
                if(m[ransomNote[i]]==0) return false;
                m[ransomNote[i]]--;
            }
        }
            return true;
    }   
};
