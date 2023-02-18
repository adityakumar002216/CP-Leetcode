bool threeConsecutiveOdds(int* arr, int arrSize){
    int k=0;
 for(int i=0;i<arrSize-2;i++){
     if(arr[i]%2!=0 &&arr[i+1]%2!=0 && arr[i+2]%2!=0)
  k=1;
 }
 return k==1;
}
