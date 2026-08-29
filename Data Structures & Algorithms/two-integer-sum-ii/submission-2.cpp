class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size() - 1;
        int left = 0;
        while (numbers.size() != 0)
        {
            int comb = numbers[right] + numbers[left];
            if (comb == target)
            {
                return {left + 1, right + 1};
            }
            else if (comb > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return {};
    }
};
