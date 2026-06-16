class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // int minEle = nums[0];
        // for (int num : nums){
        //     if (num < minEle){
        //         minEle = num;
        //     }
        // }
        int i = 1;
        while(std::find(nums.begin(),nums.end(),i) != nums.end()){
            ++i;
        }
        return i;
    }
};