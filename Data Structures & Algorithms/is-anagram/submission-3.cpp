class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        char count1[26] = {0};
        char count2[26] = {0};

        for (char ch : s)
        {
            count1[ch - 'a']++;
        }
        for (char ch : t)
        {
            count2[ch - 'a']++;
        }
        for (int i = 0; i < 26; ++i)
        {
            if (count1[i] != count2[i]) return false;
        }
        return true;
    }
};
