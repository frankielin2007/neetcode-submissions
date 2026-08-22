class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapped;
        for (size_t i = 0; i < strs.size(); i++)
        {
            string original = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mapped[strs[i]].push_back(original);
            
        }

        vector<vector<string>> total;

        for (auto& pair : mapped)
        {
            total.push_back(pair.second);
        }
        return total;
    }
};
