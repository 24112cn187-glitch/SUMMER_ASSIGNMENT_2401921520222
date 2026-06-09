class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1=s1.size();
        int n2=s2.size();

        if(n2<n1) return false;
        

        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        int k=0;
        for(int i=0;i<n1;i++)
        {
            k++;
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        k--;

        int j=0;
       while(k<n2)
       {
            if(m1==m2) return true;
            else 
            {
                m2[s2[j]]--;
                if(m2[s2[j]] == 0)  m2.erase(s2[j]);
                k++;
                j++;
                m2[s2[k]]++;
                
               

            }
       }


        return false;

    }
};
