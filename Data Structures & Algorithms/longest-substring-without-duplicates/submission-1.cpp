class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> map;
        int left = 0;
        int maxStr = 0;

        for (int right = 0; right < s.length(); ++right)
        {
            while (map.count(s[right]))
            {
                map.erase(s[left]);
                ++left;
            }
            map.insert(s[right]);
            maxStr = max(maxStr, right - left + 1);
        }
        return maxStr;
    }
};
