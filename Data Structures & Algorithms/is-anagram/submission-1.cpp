class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> count1(26,0), count2(26,0);

        for (char ch : t)
        {
            count1[ch - 'a']++;
        }
        for (char ch : s)
        {
            count2[ch - 'a']++;
        }
        if (count1 == count2) return true;
        else return false;
    }
};
