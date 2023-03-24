class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
        while(k>n)
        k=k-n;
        int t=n-k;
        vector<int>v;
        for(int i=t;i<n;i++){
            v.push_back(nums[i]);
              
        }
        for(int i=0;i<t;i++){
            v.push_back(nums[i]);
              
        }
        for(int i=0;i<n;i++){
            nums[i]=v[i];
        }
        
    }
};
