class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
      long int sum=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          if((sum+i)/(i+1)>ans){
          ans=(sum+i)/(i+1);
          
          }
        }
        return ans;
    }
};
