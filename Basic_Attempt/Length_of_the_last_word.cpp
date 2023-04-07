class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=s.length()-1;
        int g=0;
        for(int i=k;i>=0;i--){
          if(isalpha(s[i])){
          g++;
          
          }
          
          if(g>0 && s[i]==' ')
          break;
          
        }
        return g;

        
    }
};
