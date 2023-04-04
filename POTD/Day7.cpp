class Solution {
public:
    int partitionString(string s) {
      
        set<char>t;
        int k=0;
        for(int i=0;i<s.length();i++){
          if(t.count(s[i])){
          k++;
          t.clear();
          t.insert(s[i]);
          
          }
          else{
          t.insert(s[i]);
          }
        }
        return k+1;
        
    }
};
