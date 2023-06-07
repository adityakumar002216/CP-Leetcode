class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
    unordered_map<char,int>m;
    int i=0;
    int j=0;
    int k=0;
    int r=0;
    while(i<s.length()){
      m[s[i]]++;
      if(m[s[i]]==2){
        k=max(k,i-j);
      j++;
      i=j;
      m.clear();
    }
    else{
      
    i++;
    r=i;
    }

    }
    k=max(k,r-j);
    return k;
    }
};
     
    
