class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string str : tokens)
        {
            if (str != "+" && str != "-" && str != "*" && str != "/") 
            st.push(stoi(str));
            else 
            {
                int top = st.top(); st.pop();
                int second = st.top(); st.pop();

                if (str == "+")
                {
                    st.push(top + second);
                }
                else if (str == "-")
                {
                    st.push(second - top);
                }
                else if (str == "*")
                {
                    st.push(second * top);
                }
                else if (str == "/")
                {
                    st.push(second / top);
                }
            }
        }
        return st.top();
    }
};
