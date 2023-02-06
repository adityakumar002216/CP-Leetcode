class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int k=1;
       for(int i=0;i<arr.size();i++){
           for(int j=0;j<arr.size();j++)
           if( i!=j && arr[i]==2*arr[j]){
           k=0;
           return k==0; 
           }
           
       }
      return k==0; 
    }
};
