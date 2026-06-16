class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> smap, tmap;

        for (char ch : s)
            smap[ch]++;
        for (char ch : t)
            tmap[ch]++;

        return smap == tmap;
    }
};
