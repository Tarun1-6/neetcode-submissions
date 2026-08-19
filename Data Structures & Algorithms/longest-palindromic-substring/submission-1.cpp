class Solution {
public:
    string palindrome(string s, int left , int right){
        while (left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right - left - 1);
    }
    string longestPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); ++i){
            string odd = palindrome(s,i,i);
            if (odd.size() > ans.size()) ans = odd;

            string even = palindrome(s,i,i+1);
            if (even.size() > ans.size()) ans = even;
        }
        return ans;
    }
};
