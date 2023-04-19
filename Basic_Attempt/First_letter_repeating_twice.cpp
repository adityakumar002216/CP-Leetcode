class Solution {
public:
    char repeatedCharacter(string s) {
     unordered_set<char>k;
     char t;
     k.insert(s[0]);
     for(int i=1;i<s.length();i++){
       if(k.count(s[i])){
       t=s[i];
      break;
     }
       else
       k.insert(s[i]);
     }
    return t;
    }
};
