class Solution {
public:
    int majorityElement(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int n=nums.size(),k=1,r=0;
        if(n==1)
            return k;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
            {
                k++;
                if(k>n/2){
                r=nums[i];
                break;
                }
            }
            else
                k=1;
        }
        return r;
    }
};
