class Solution {
public:
    bool isUgly(int n) {
    int k=0;
   int i=2;
    if(n<=0)
    return false;
       while(3<n)
       { 
          if(n%5==0)  
           n=n/5;
         else if(n%2==0)
             n=n/2;
         else if(n%3==0)
          n=n/3;
         else
         return false;
      }
        
   return true; 
    }
};
