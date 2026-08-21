class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int slow = 0;
        int fast = 1;
        vector<int> result;
        while (slow < nums.size() - 1)
        {            
            int sum = nums[slow] + nums[fast];
            if (sum == target)
            {
                return {slow, fast};
            }
            fast += 1;
            if (fast >= nums.size())
            {
                slow++;
                fast = slow + 1;
            }
        }

        return {};
    }
};
