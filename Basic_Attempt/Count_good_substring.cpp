class Solution {
public:
    int countGoodSubstrings(string nums) {
      int k=0;
     for(int i=2;i<nums.length();i++){
if(nums[i-2]!=nums[i-1] && nums[i-2]!=nums[i] && nums[i-1]!=nums[i])
       k++;
     }
     return k;   
    }
};
