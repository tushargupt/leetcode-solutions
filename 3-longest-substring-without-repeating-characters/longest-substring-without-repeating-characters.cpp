class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charMap;
    int maxLength = 0;
    int windowStart = 0;
    
    for (int windowEnd = 0; windowEnd < s.length(); windowEnd++) {
        if (charMap.find(s[windowEnd]) != charMap.end() && charMap[s[windowEnd]] >= windowStart) {
            windowStart = charMap[s[windowEnd]] + 1;
        }
        
        charMap[s[windowEnd]] = windowEnd;
        
        maxLength = max(maxLength, windowEnd - windowStart + 1);
    }
    
    return maxLength;
}
};