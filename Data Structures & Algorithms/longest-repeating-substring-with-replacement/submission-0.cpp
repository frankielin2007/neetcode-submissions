class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hash;
        int longest = 0;
        int left = 0;
        int maxFreq = 0;
        for (int right = 0; right < s.length(); right++)
        {
            char cur = s[right];
            hash[cur]++;
            maxFreq = max(maxFreq, hash[cur]);
            while ((right - left + 1) - maxFreq > k)
            {
                char charleft = s[left];
                hash[charleft]--;
                left++;
            }
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
