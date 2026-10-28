class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<char> s_map(26);

        for (int i = 0; i < s.length(); i++){
            s_map[s[i] - 'a']++;
            s_map[t[i] - 'a']--;
        }
        for (int i = 0; i < s_map.size(); i++){
            if (s_map[i] != 0) return false;
        }
        return true;
    }
};
