class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.length()<ransomNote.length())
        return false;
        int alpha[26]={0};
        for(char c: magazine){
            alpha[c-'a']++;
        }
        for(char c: ransomNote){
            alpha[c-'a']--;
            if(alpha[c-'a']<0)
            return false;
        }
        return true;
    }
};