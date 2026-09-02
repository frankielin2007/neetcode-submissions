class Solution {
public:
    bool isValid(string s) {
        stack<char> chr;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                chr.push(c);
            }
            else
            {
                if (chr.empty())
                {
                    return false;
                }
                if (c == ')' && chr.top() != '(')
                    return false;
                if (c == ']' && chr.top() != '[')
                    return false;
                if (c == '}' && chr.top() != '{')
                    return false;
                chr.pop();
            }
        }
        return chr.empty();

        

    }
};
