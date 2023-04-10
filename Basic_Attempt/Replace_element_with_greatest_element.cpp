class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      
       int x= -1;
         
         for(int i = arr.size() - 1; i >= 0; i--){
            int t = x;
            if(x< arr[i])
            x=arr[i];
            arr[i] = t;
         }
         return arr;
        
        
    }
};
