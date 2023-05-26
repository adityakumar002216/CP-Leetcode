class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int k=0,t=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
          k++;
          if(t<k)
          t=k;

        }
        else
        k=0;
        }
        return t;
    }
};
