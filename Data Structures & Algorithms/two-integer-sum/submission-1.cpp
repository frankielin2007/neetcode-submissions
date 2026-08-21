class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int slow = 0; slow < nums.size(); slow++) {
            for (int fast = slow + 1; fast < nums.size(); fast++) {
                if (nums[slow] + nums[fast] == target) {
                    return {slow, fast};
                }
            }
        }

        return {};
    }
};