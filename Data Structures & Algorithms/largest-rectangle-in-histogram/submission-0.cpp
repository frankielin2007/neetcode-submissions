class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> sta;
        int maxArea = 0;
        for (int i = 0; i <= heights.size(); i++)
        {
            int currentHeight;
            if (i == heights.size())
            {
                currentHeight = 0;
            }
            else
            {
                currentHeight = heights[i];
            }

            while (!sta.empty() && currentHeight < heights[sta.top()])
            {
                int height = heights[sta.top()];
                sta.pop();

                int width;

                if (sta.empty())
                {
                    width = i;
                }
                else
                {
                    width = i - sta.top() - 1;
                }

                int area = height * width;

                maxArea = max(maxArea, area);
            }
            sta.push(i);
        }
        return maxArea;
    }
};
