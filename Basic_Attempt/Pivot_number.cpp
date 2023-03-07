class Solution {
public:
    int pivotInteger(int n) {
      vector<int>v1;
      int sum1=0;
      vector<int>v2;
      int sum2=0; 
      for(int i=1;i<=n;i++)
      {
        sum1+=i;
        
        v1.push_back(sum1);
      } 
      for(int i=n;i>=1;i--)
      {
        sum2+=i;
        
        v2.push_back(sum2);
      } 
      for(int i=0,j=n-1;i<n; i++,j--){
        if(v1[i]==v2[j])
        return i+1;
      }
      return -1;
    }
};
