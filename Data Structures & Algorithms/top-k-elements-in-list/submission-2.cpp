class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (size_t i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;  
        }   
        vector<pair<int, int>> freq;
        for (auto& pair : hash)
        {
            freq.push_back(pair);
        }

        sort(freq.begin(), freq.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second > b.second;});
        vector<int> result;


        for (int j = 0; j < k; j++)
        {
            result.push_back(freq[j].first);
        }

        return result;
        
    }
};
