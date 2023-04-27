class Solution {
public:
    int bulbSwitch(int n) {
      int k=0;
      if(n==1)
      return 1;
      for(long i=1;i<n;i++){
        if(i*i<=n)
        k++;
        else
        break;
      }
      return k;
    }
};
