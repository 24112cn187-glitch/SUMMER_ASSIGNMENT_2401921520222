class Solution {
public:

    void par(vector<string> &v,string s,int open , int close,int n)
    {

        if(close==n)
        {
            v.push_back(s);
            return;
        }

        
       if(open <n) par(v,s+'(',open+1,close,n);
       if(close<open ) par(v,s+')',open,close+1,n);

    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        
        par(v,"",0,0,n);

        return v;
        
    }
};
