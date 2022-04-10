class Solution
{
    public:
        int calPoints(vector<string> &ops)
        {
            stack<int> st;
            int sum = 0;
            for (string i: ops)
            {

                if ( i == "C")
                {
                    st.pop();
                }
                else
                if (i == "D")
                {
                    int d = st.top();
                    st.push(d *2);
                }
                else if ( i == "+")
                {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.push(val1);
                    st.push(val1+val2);
                    
                }
               else{
                        st.push(stoi(i));
               }

            }
            while(st.size()!=0)
            {
                sum+=st.top();
                st.pop();
            }
            
            return sum;
        }
};