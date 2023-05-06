class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
        
        int mod = 1e9+7, count = 0;
        
        vector<int>powerOf2(nums.size(), 1);
        for (int i = 1; i < nums.size(); i++) {
            powerOf2[i] = powerOf2[i-1] * 2 % mod;
        }
        
        int left = 0, right = nums.size()-1;
        while (left <= right) {
            if (nums[left] + nums[right] > target) {
                right--;
            }
            else {
                count += powerOf2[right - left];
                count %= mod;
                left++;
            }
        }
        return count;
        
    }
};
