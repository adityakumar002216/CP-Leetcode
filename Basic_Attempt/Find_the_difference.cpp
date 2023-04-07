class Solution {
public:
    char findTheDifference(string s, string t) {
       int k=max(s.length(),t.length());
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
        for(int i=0;i<k;i++){
          if(s[i]!=t[i])
          return t[i];
        }
       return 0; 
    }
};
