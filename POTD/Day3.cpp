class Solution {
public:
  
    int maxSatisfaction(vector<int>& satisfaction) {
      
      sort(satisfaction.begin(),satisfaction.end());
      int n=satisfaction.size();
      int sum=0,k=0,ans;
      for(int i=0;i<n;i++){
        sum=0;
        for(int t=1,j=i;j<n;j++,t++){
          sum+=satisfaction[j]*(t);
          // cout<<sum<<" ";
         if(k<sum)
          k=sum;

        }
      }
      return k;
      
    }
};
