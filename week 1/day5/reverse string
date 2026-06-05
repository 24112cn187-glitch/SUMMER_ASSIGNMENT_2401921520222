class Solution {
public:

    void reverse(int i,int j ,vector<char>& s)
    {
        
        if(i>j) return;

        char a= s[i];
            s[i]=s[j];
            s[j]=a;
            reverse(i+1,j-1,s);
    }
    void reverseString(vector<char>& s) {

        int n=s.size();
        int i=0;
        int j=n-1;

        // while(i<j)
        // {
        //     char a= s[i];
        //     s[i]=s[j];
        //     s[j]=a;
        //     i++;
        //     j--;
        // }

            reverse(0,n-1,s);

        
        
    }
};
