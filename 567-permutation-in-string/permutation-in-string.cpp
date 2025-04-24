class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        sort(s1.begin(), s1.end());
        int m = s2.size();
        for(int i=0; i<=m-n+1; i++){
           string r = s2.substr(i, n);
           sort(r.begin(), r.end());
           if(s1==r){
            return true;
           }
        }
        return false;
    }
};


