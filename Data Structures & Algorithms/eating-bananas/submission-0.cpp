class Solution {
public:
    // Helper function: can Koko finish all bananas at speed k in h hours?
    bool canFinish(vector<int>& piles, int h, int k) {
        long long hours = 0;  // use long long to avoid overflow
        for (int p : piles) {
            hours += (p + k - 1) / k;  // ceil(p / k) without floats
            if (hours > h) return false;  // early stop if already too many hours
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canFinish(piles, h, mid)) {
                right = mid;  // try slower speed
            } else {
                left = mid + 1;  // need faster speed
            }
        }
        return left;
    }
};
