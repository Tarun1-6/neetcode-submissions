class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right = nums.size() - 1;
        int left = 0;
        int sleft = 0;
        while (nums[right] < nums[0]){
            sleft = right;
            right--;
        }
        while (right >= left){
            int mid = (right+left)/2;
            if (nums[mid] > target) right = mid - 1;
            else if (nums[mid] < target) left = mid + 1;
            else return mid;
        }
        while (right >= left){
            int mid = (right+left)/2;
            if (nums[mid] > target) right = mid - 1;
            else if (nums[mid] < target) left = mid + 1;
            else return mid;
        }
        int sright = nums.size() - 1;
        while (sright >= sleft){
            int mid = (sright+sleft)/2;
            if (nums[mid] > target) sright = mid - 1;
            else if (nums[mid] < target) sleft = mid + 1;
            else return mid;
        }
        return -1;
    }
};
