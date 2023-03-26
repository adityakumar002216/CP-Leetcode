class Solution {
public:
    bool isPalindrome(string s) {
      string k;
      int o=0;
        for(int i=0;i<s.length();i++){
          if(iswalnum(s[i])){
            if(isupper(s[i]))
              k.push_back(tolower(s[i]));
            else
            k.push_back(s[i]);
          }
          continue;
        }
        
        for(int j=k.length()-1,i=0;i<j;i++,j--)
        {
          if(k[i]==k[j])
          o++;
        }
        
        return o==k.length()/2 ;
        
    }
};
