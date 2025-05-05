class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0)
        return false;
        stack<char> st;
        st.push(s[0]);
        int i = 1;
        while(!st.empty() || i<s.size()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
            }
            else if(st.empty())
            return false;
            else if(s[i]==')' && st.top()!='(')
            {
            return false;
            }
            else if(s[i]=='}' && st.top()!='{')
            {
              st.pop();
            return false;
            }
             else if(s[i]==']' && st.top()!='[')
            {
            return false;
            }
            else{
                st.pop();
            }
            i++;
            if(i>=s.size() && !st.empty())
            return false;
        }
        return st.empty();
    }
};