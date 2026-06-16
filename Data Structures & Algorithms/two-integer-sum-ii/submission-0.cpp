class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int sum = 0;
        for (int i = 0;i < n ; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sum = numbers[i] + numbers[j];
                if (sum == target)
                {
                    return {i+1, j+1};
                }
            }
        }
        return {};
    }
};
