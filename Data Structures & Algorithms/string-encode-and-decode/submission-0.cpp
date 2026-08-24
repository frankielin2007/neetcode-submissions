class Solution {
public:

    string encode(vector<string>& strs) {
        string result1;
        for (size_t i = 0; i < strs.size(); i++)
        {
            string code = to_string(strs[i].size()) + "#" + strs[i];
            result1 += code;
        }
        return result1;;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i != s.length())
        {
            size_t j = i;
            while (s[j] != '#')
            {
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            i = j + 1;
            string strings = s.substr(i, length);
            result.push_back(strings);
            i += length;
        }
        return result;
    }

};
