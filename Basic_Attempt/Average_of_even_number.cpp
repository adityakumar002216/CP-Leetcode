class Solution {
public:
    int averageValue(vector<int>& nums) {

      int sum=0,k=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]%3==0 && nums[i]%2 ==0){
        sum+=nums[i];
        k++;
       } 
      }
      cout<<sum<<" "<<k;
      if(k==0)
      return k;
      return sum/k; 
    }
};
