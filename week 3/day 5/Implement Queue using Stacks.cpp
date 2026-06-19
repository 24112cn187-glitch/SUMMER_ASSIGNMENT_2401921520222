class MyQueue {
public:
    stack<int> st;
    stack<int> help;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
        
    }
    
    int pop() {
        while(st.size()>0)
        {
            help.push(st.top());
            st.pop();
        }

        int x=help.top();
        help.pop();

        while(help.size()>0)
        {
            st.push(help.top());
            help.pop();
        }

        return x;
        
    }
    
    int peek() {
        while(st.size()>0)
        {
            help.push(st.top());
            st.pop();
        }

        int x=help.top();
        

        while(help.size()>0)
        {
            st.push(help.top());
            help.pop();
        }

        return x;
        
    }
    
    bool empty() {
        if(st.size()==0) return true;

        else return false;
        
    }
};

