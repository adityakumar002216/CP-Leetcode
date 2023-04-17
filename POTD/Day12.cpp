class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int x=0;
        for(int i=0;i<candies.size();i++){
          if(candies[i]>x)
          x=candies[i];
        }
        for(int i=0;i<candies.size();i++){
          if(candies[i]+extraCandies>=x)
           v.push_back(true);
           else
           v.push_back(false);
        }
        cout<<x;
        return v;
    }
};
