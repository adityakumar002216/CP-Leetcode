class Solution {
public:
    void reverseString(vector<char>& s) {
      int k=s.size()-1;
        for(int i=0,j=k;i<j;i++,j--){
            char temp=s[j];
            s[j]=s[i];
            s[i]=temp;
        }  
    }
};
