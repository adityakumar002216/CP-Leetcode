class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        int n=nums.size();
           for(int i=0;i<n;i++){
             v1.push_back(sum1);
             sum1+=nums[i];
           }
        
        for(int i=n-1;i>=0;i--){
             v2.push_back(sum2);
               sum2+=nums[i];
           }
         reverse(v2.begin(),v2.end());
        
              for(int i=0;i<n;i++){
             v3.push_back(abs(v1[i]-v2[i]));

             }
        return v3;
    }
};
