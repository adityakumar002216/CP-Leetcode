class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>x;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
        if(target==nums[i]+nums[j]){
        x.push_back(i);
        x.push_back(j);
        }
        }
        return x;
          
        
    }
};
