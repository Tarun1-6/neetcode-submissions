class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        vector<string> strings(strs.begin(),strs.end());

        for (auto str : strings)
        {
            string sign = str;
            sort(sign.begin(),sign.end());
            map[sign].push_back(str);
        } 
        for (auto &pair : map)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
