class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      int y=0;
        for(int i=0;i<words.size();i++){
          y=0;
          for(int k=0,l=words[i].size()-1;k<=l;k++,l--){
              if(words[i][k]==words[i][l]){
              ++y;
            cout<<" "<<y<<" "<<words[i].size();
              if(words[i].size()%2!=0){
              if(y==(words[i].size()/2)+1)
              return words[i];
              }
              if(words[i].size()%2==0){

              if(y==(words[i].size()/2))
              return words[i];
              }
              
              
            }
          
         }
        }
        return "";
    }
};
