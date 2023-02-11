class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v;
         vector<int>r;
        int k=-1,sum=0,p=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            v.push_back(sum);
        }
        for(int i=nums.size()-1;i>=0;i--){
            p+=nums[i];
            r.push_back(p);
        }
        for(int i=0;i<nums.size();i++){
            if(v[i]==r[nums.size()-1-i]){
                k=i;
                break;
            }
        }
        return k;
    }
};
