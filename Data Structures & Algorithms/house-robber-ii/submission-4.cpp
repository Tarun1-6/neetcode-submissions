class Solution {
    int robHelper(vector<int>& nums, int start, int end) {
        int first = nums[start];
        int sec = max(nums[start], nums[start + 1]);
        int curr = 0;
        for (int i = start + 2; i < end; ++i) {
            curr = max(sec, first + nums[i]);
            first = sec;
            sec = curr;
        }
        return sec;
    }

   public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        return max(robHelper(nums, 0, n - 1), robHelper(nums, 1, n));
    }
};
