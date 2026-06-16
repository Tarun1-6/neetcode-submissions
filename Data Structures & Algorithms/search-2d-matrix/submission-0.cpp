class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int colm = matrix[0].size();

        int top = 0, bot = rows - 1;
        int row;

        while (top <= bot) {
            row = (top + bot) / 2;
            if (target > matrix[row][colm - 1])
                top = row + 1;
            else if (target < matrix[row][0])
                bot = row - 1;
            else
                break;
        }

        if (top > bot) return false;

        int left = 0, right = colm - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (target > matrix[row][mid])
                left = mid + 1;
            else if (target < matrix[row][mid])
                right = mid - 1;
            else
                return true;
        }

        return false;
    }
};