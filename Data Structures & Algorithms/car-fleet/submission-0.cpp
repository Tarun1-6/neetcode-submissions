class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int i = 0; i < position.size(); ++i){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        vector<double> stack;
        for (int i = 0; i < cars.size(); ++i){
            double time = (double)(target- cars[i].first)/cars[i].second;
            stack.push_back(time);
            if (stack.size() > 1){
                if (stack.back() <= stack[stack.size() - 2]){
                    stack.pop_back();
                }
            }
        }
        return stack.size();
    }
};
