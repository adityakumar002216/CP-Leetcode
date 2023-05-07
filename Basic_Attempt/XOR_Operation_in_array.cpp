class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
       int  k=0;
        for(int i=0;i<n;i++){
            k=k^(nums[i]=start+2*i);
        }
        return k;
    }
};
