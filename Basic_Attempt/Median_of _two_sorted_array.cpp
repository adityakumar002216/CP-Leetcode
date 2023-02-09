class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>k;
            if(nums1.size()>=1){
             for(int i=0;i<nums1.size();i++)
             k.push_back(nums1[i]);
          }
        if(nums2.size()>=1){
           for(int i=0;i<nums2.size();i++)
           k.push_back(nums2[i]);
        }
        sort(k.begin(),k.end());
             if(k.size()%2!=0)
            return k[k.size()/2];
            else
            return  (double)(k[k.size()/2]+ k[(k.size()/2)-1])/2;
    }
};
