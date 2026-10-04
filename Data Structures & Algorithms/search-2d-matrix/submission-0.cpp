class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> nar;
        for (const auto& row : matrix)
        {
            int low = 0;
            int high = row.size() - 1;
            if (row[low] <= target && row[high] >= target)
            {
                for (int i = 0; i < row.size(); i++)
                {
                    if (row[i] == target)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
