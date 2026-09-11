class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int left = 0;
        int longest = 0;
        for (int right = 0; right < s.length(); right++)
        {

            if (hash.find(s[right]) != hash.end())
            {
                left = max(left, hash[s[right]] + 1);
            }

            hash[s[right]] = right;

            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};