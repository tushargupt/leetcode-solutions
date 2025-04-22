class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length())
       return false;
       int alpha[26]={0};
       for(char c: s){
        alpha[c-'a']++;
       }
       for(char c: t){
        alpha[c-'a']--;
        if(alpha[c-'a']<0)
        return false;
       }
       return true;
    }
};