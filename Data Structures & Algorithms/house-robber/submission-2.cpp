class Solution {
public:
    int rob(vector<int>& nums) {
        int first = nums[0];
        if (nums.size() == 1) return first;
        int sec = max(nums[0],nums[1]);
        if (nums.size() == 2) return sec;

        int curr = 0;
        for (int i = 2; i < nums.size(); ++i){
            curr =  max(sec, first + nums[i]);
            first = sec;
            sec = curr;
        }
        return curr;
    }
};
