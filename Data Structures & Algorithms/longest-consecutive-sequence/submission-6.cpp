class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash;
        vector<int> current;
        int longest = 1;
        int real = 0;
        if (nums.size() == 0)
        {
            return 0;
        }
        for (size_t i = 0; i < nums.size(); i++)
        {
            hash.insert(nums[i]);
        }
        for (const auto& num : hash)
        {
            if (hash.count(num + 1) != 0)
            {
                longest += 1;
            }
            if (hash.count(num + 1) == 0)
            {
                current.push_back(longest);
                longest = 1;
            }
        }
        auto max_it = max_element(current.begin(), current.end());
        if (max_it != current.end())
        {
            return *max_it;
        }

        return real;
    }
};
