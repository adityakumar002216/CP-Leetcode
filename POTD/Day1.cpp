class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int k=0;
      flowerbed.insert(flowerbed.begin(),0);
      flowerbed.insert(flowerbed.end(),0);
      for(int i=2;i<flowerbed.size();i++){
        if(flowerbed[i-2]==0 && flowerbed[i-1]==0 && flowerbed[i]==0)
        {
        flowerbed[i-1]=1;
        k++;
        }
      }
      return k>=n;  
    }
};
