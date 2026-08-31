class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int first = 0;
        sort(nums.begin(), nums.end());
        while (first < nums.size())
        {
            if (first > 0 && nums[first] == nums[first - 1])
            {
                first++;
                continue;
            }
            int second = first + 1;
            int third = nums.size() - 1;
            while(second < third)
            {
                int comb = nums[first] + nums[second] + nums[third];
                if (comb == 0)
                {
                    result.push_back({nums[first], nums[second], nums[third]});
                    third--;
                    second++;
                    while (second < third && nums[second] == nums[second - 1])
                    {
                        second++;
                    }
                }
                if (comb > 0)
                {
                    third--;
                }
                if (comb < 0)
                {
                    second++;
                }
            }
            first++;
        }
        return result;
    }
};
