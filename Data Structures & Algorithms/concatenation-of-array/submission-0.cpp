class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        while (i < 2)
        {
            for (int num : nums){
                ans.push_back(num);
            }
            i++;
        }
        return ans;
    }
};