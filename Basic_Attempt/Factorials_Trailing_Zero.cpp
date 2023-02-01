class Solution {
public:
    int trailingZeroes(int  n) {
        
    int y=0;
    
        while(n/5){
            y+=n/5;
           n=n/5;
            
           
        }
      return y;  
    }
};
