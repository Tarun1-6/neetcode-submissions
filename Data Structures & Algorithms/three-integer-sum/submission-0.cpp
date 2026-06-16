class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;

        int i = 0;

        while (i < nums.size() - 2)
        {
            int j = i + 1;

            while (j < nums.size())
            {
                int k = j + 1;

                while (k < nums.size())
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        result.insert(triplet);
                        break;
                    }
                    else ++k;
                }
                ++j;
            }
            ++i;
        }
        return vector<vector<int>>(result.begin(), result.end());
        
    }
};
