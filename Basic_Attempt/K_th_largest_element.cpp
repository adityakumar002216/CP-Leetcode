class Solution {
public:
    int findKthLargest(vector<int>& nums, int t) {
        
        sort(nums.begin(),nums.end());
        int k=1,x=nums[nums.size()-1];
        for(int i=nums.size()-1;i>0;i--){
          if(nums[i-1]<=nums[i])
          k++;
          if(t==k)
          x=nums[i-1];
        }
        return x;
    }
};
