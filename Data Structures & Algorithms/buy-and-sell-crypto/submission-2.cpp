class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPr = 0;
        int left = 0,right = 1;

        while (right < prices.size())
        {
            if (prices[right] < prices[left]) left = right;
            maxPr = max(maxPr, prices[right] - prices[left]);
            ++right;
        }
        return maxPr;
    }
};
