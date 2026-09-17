class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> seen;
        unordered_map<char, int> cur;
        int diff = s1.size();

        for (char c: s1) 
        {
            seen[c]++;
        }

        int len = 0;

        for (int i = 0; i < s2.size(); i++)
        {
            cur[s2[i]]++;
            diff--;
            while (cur[s2[i]] > seen[s2[i]])
            {
                cur[s2[len++]]--;
                diff++;
            }
            if (diff == 0)
                return true;
        }
        return false;
    }
          
};