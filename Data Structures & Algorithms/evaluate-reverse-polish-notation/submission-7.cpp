class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (string c : tokens)
        {
            if (c != "+" && c != "*" && c != "/" && c != "-")
            {
                nums.push(stoi(c));
            }
            else
            {
                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();
                if (c == "+")
                {
                    nums.push(left + right);
                }
                if (c == "-")
                {
                    nums.push(left - right);
                }   
                if (c == "*")
                {
                    nums.push(left * right);
                }
                if (c == "/")
                {
                    nums.push(left / right);
                }
            }
        }

        return nums.top();
        
    }
};
