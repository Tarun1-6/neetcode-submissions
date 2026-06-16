class Solution {
public:

    string encode(vector<string>& strs) {
        string enStr;

        for (string str : strs)
        {
            enStr += to_string(str.length()) + '#' + str;
        }
        return enStr;;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.length())
        {
            string numStr = "";

            while (isdigit(s[i]))
            {
                numStr += s[i];
                ++i;
            }

            ++i;

            int strLen = stoi(numStr);

            string word = s.substr(i , strLen);
            result.push_back(word);

            i += strLen;
        }
        return result;
    }
};
