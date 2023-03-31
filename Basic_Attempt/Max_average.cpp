class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      double max_sum,sum=0;
      int p;
        for(int i=0;i<k;i++){
          sum+=nums[i];
          max_sum=sum;
          p=i;
        }
        
        for(int i=p+1, j=0;i<nums.size();j++,i++){
          sum-=nums[j];
          sum+=nums[i];
          max_sum=max(max_sum,sum);
        }

          
        
        return max_sum/k;
    }
};
