class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        for (size_t i = 0; i < position.size(); i++)
        {
            double times = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], times});
        }
        sort(cars.rbegin(), cars.rend());
        stack<double> result;
        for (auto car : cars)
        {
            double times = car.second;
            if (result.empty() || times > result.top())
            {
                result.push(times);
            }
        }
        return result.size();
    }
};
