class Solution {
public:
    bool check(vector<int>& nums) {
      int k=0;
        for(int i=1;i<nums.size();i++){
          if(nums[i-1]>nums[i])
          k++;
        }
        if((k==1 && nums[0]>=nums[nums.size()-1]) || k==0)
        
        return true;
        return false;
    }
};
