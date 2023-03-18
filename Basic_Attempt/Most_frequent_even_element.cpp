class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      map<int,int>x;
      int k=-1,ans=-1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]%2==0){
           x[nums[i]]++;
           if(x[nums[i]]>k){
             k=x[nums[i]];
             ans=nums[i];
           }
           if(k==x[nums[i]]){
             if(ans>nums[i])
             ans=nums[i];

           }
          }
        }
        return ans;
    }
};
