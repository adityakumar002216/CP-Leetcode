class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int k=1,x=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i]){
             k++;
             
              if(k>x)
            x=k;
            }
           
            else
            k=1;
          
        }
        
        return x;
    }
};
