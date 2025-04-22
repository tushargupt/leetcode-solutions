class Solution {
public:
    string reverseVowels(string s) {
      vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
     stack<char> str;
     for(char c: s){
        if(find(vowels.begin(), vowels.end(),  c)!=vowels.end()){
            str.push(c);
        }
     }
     for(int i=0; i<s.length(); i++){
        if(find(vowels.begin(), vowels.end(),  s[i])!=vowels.end()){
          char a = str.top();
          str.pop();
          s[i]=a;
        }
     }
     return s; 
    }
};
