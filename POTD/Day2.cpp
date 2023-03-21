class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
      long long int k=0,sum=0,t=0,i;
        for( i=0;i<nums.size();i++){
          if(nums[i]==0){
          k++;
          }
          if(nums[i]!=0 || i==nums.size()-1 ){
          sum+=(k*(k+1))/2;
          k=0;
         }
        }
        return sum;
    }
};
