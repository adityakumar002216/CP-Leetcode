class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int k=0;
        
        for(int i=0;i<word1.length();i++){
        s+=word1[i];
        if(i<word2.length())
        s+=word2[i];
        k=i;
        }
        
        for(int i=k+1;i<word2.length();i++)
        s+=word2[i];
        
        
        
        return s;
    }
};
