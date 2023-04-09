class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
      int sum=0,sum1=0;
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
        }
        for(int j=0;j<nums.size();j++){
          if(nums[j]>9){
            int y=nums[j];
          while(y){
             sum1+=y%10;
            y=y/10;

          }
        }
        else
        sum1+=nums[j];
    }
    return abs(sum-sum1);
    }
};
