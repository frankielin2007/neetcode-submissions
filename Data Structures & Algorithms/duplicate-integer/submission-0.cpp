#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> result;
        for (size_t i = 0; i < nums.size(); i++)
        {
            result.insert(nums[i]);
        }
        if (result.size() == nums.size())
        {
            return false;
        }
        return true;
    }
};