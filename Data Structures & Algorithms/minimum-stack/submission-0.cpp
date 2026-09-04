class MinStack {
public:
    vector<int> sta;
    vector<int> minSta;
    MinStack() {
    }
    
    void push(int val) {
        sta.push_back(val);

        if (minSta.empty() || val <= minSta.back())
        {
            minSta.push_back(val);
        }
    }
    
    void pop() {
        if (minSta.back() == sta.back())
        {
            minSta.pop_back();
        }
        sta.pop_back();
    }
    
    int top() {
        int end = sta.size() - 1;
        return sta[end];
    }
    
    int getMin() {
        return minSta.back();

        
    }
};
