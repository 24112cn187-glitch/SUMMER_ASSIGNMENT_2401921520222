class Solution {
public:
    int strStr(string haystack, string needle) {

        int i=0;
        int j=0;
        int k=0;
        int n1=haystack.size();
        int n2=needle.size();
        bool flag = false;

        if(n2==0) return 0;
        if(n2>n1) return -1;

        while(j<=n1-n2)
        {
            
            for(int l=0;l<n2;l++)
            {
                if(haystack[i]!=needle[l]) 
                {
                    flag = true;
                    break;
                }
                else 
                {
                    i++;
                }
            }

            if(flag == false) return j;
            j++;
            i=j;
            flag=false;
        }

        return -1;
        
    }
};
