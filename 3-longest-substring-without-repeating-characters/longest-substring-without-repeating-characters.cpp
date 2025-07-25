class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int maxLen = 0;
        int start = 0;

        for (int end = 0; end < s.length(); ++end) {
            char c = s[end];

            if (mp.count(c) && mp[c] >= start) {
                start = mp[c] + 1;
            }

            mp[c] = end;
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
       
    }
};