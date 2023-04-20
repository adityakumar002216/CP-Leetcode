class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
      vector<int>v;
      vector<int>k;
        for(int i=0;i<nums.size();i++){
          int n=nums[i];
          while(n){
            int c=n%10;
            k.push_back(c);
            n=n/10;
          }
          reverse(k.begin(),k.end());
          for(int i=0;i<k.size();i++)
          v.push_back(k[i]);
          k.clear();
        }
        return v;
    }
};
