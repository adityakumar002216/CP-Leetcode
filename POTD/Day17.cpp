lass Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         vector<vector<int>>v1;
         vector<int>v3;
         vector<int>v5;
         set<int>s1;
         set<int>s2;
         for(int i=0;i<nums1.size();i++)
         s1.insert(nums1[i]);
         for(int i=0;i<nums2.size();i++)
         s2.insert(nums2[i]);
         vector<int>v2(s1.begin(),s1.end());
         vector<int>v4(s2.begin(),s2.end());
         for(int i=0;i<v2.size();i++)
         if(!s2.count(v2[i]))
         v3.push_back(v2[i]);
         v1.push_back(v3);
         for(int i=0;i<v4.size();i++)
         if(!s1.count(v4[i]))
         v5.push_back(v4[i]);
         v1.push_back(v5);
         return v1;
    }
};
