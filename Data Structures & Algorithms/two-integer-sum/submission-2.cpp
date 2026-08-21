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
                result.push_back(slow);
                result.push_back(fast);
            }
            fast += 1;
            if (fast >= nums.size())
            {
                slow++;
                fast = slow + 1;
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
