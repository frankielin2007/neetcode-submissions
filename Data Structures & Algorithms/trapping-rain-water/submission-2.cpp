class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int total_area = 0;
        auto max_it = max_element(height.begin(), height.end());
        int max = *max_it;
        while (left < height.size() - 1)
        {
            if (height[left] == 0)
            {
                left++;
                continue;
            }
            int right = left + 1;
            while (right < height.size() && height[right] < height[left])
            {
                right++;
            }
            if (right < height.size())
            {
                for (size_t i = left + 1; i < right; i++)
                {
                    total_area += height[left] - height[i];
                }
                left = right;
            }
            else
            {
                int tallest = left + 1;
                for (size_t i = left + 1; i < height.size(); i++)
                {
                    if (height[i] > height[tallest])
                    {
                        tallest = i;
                    }
                }
                right = tallest;

                for (size_t i = left + 1; i < right; i++)
                {
                    total_area += min(height[left], height[right]) - height[i];
                }

                left = right;
            }
        }
        return total_area;
        
    }
};
