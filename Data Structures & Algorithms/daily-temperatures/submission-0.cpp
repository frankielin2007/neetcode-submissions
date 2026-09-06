class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> results(temperatures.size(), 0);
        for (size_t i = 0; i < temperatures.size(); i++)
        {
            while (!st.empty() && temperatures[i] > temperatures[st.top()])
            {
                int prev = st.top();
                st.pop();
                results[prev] = i - prev;

            }
            st.push(i);
        }
        return results;
    }
};
