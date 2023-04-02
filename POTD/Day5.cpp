class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       vector<int>v;
        sort(potions.begin(), potions.end());
        
        for (int i = 0; i < spells.size(); i++) {

  int l = 0, h = potions.size()-1,size= potions.size();
   while (l <= h) 
   {
      int mid = l + (h-l)/2;
      long long curr = (long long)spells[i] * potions[mid];
       if (curr >= success) {
       size = mid;
       h = mid - 1;
        }
    else {
                    l = mid + 1;
        }
    }
   v.push_back(potions.size() - size);

        }
        
        return v;
    }
};
