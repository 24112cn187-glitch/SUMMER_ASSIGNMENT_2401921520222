class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        if(s.length() == 1)return false;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s[i] == '(' || s[i]=='{'|| s[i]== '[')
            {
                st.push(s[i]);
            }
            else 
            {
                if(s[i] == ')')
                {
                    if(st.size() ==0) return false;
                    if(st.top() == '(') st.pop();
                    else return false;
                }

               else if(s[i] == '}')
                {
                     if(st.size() ==0) return false;
                    if(st.top() == '{') st.pop();
                    else return false;
                }

                else if(s[i] == ']')
                {
                     if(st.size() ==0) return false;
                    if(st.top() == '[') st.pop();
                    else return false;
                }
            }
        }

        if(st.size() ==0) return true;
        else return false;
        
    }
};
