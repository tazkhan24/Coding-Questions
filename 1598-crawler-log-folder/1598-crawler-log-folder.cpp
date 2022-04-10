class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        int sum=0;
        for(string i: logs){
            if(i == "../" && !st.empty())
                {
                    st.pop();
                }
            else
                if(i=="./"){
                    continue;
                }
            else
                if(i != "../")
            {
                st.push(i);
            }
    }
        while(!st.empty()){
            sum++;
            st.pop();
        }
        return sum;
    }
};