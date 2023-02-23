class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
      int k=1,p;
      if(arr.size()==1)
      return arr[0];
        for(int i=1;i<arr.size();i++){
          if(arr[i-1]==arr[i]){
          k++;
          if(k>arr.size()/4)
          p=arr[i];
          }
        
        else
        k=1;
    }
    return p;
    }
};
