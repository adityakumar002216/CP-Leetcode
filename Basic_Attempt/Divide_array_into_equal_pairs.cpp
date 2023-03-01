class Solution {
public:
    bool divideArray(vector<int>& nums) {
       int k=0; 

       sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i+=2)
       {
         if(nums[i-1]!=nums[i])
         k=1;
       }
       
       return k==0;
        
    }
};
