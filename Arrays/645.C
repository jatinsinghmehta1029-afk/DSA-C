
int* findErrorNums(int* nums, int numsSize, int* returnSize) {

  int freq[10001]={0};
  for(int i=0;i<numsSize;i++){
    freq[nums[i]]++;
  }
  int *ans=(int *)malloc(2*sizeof(int));
  *returnSize=2;
  for (int i=1;i<=numsSize;i++){
     if (freq[i]==2){
        ans[0]=i;}
      else if(freq[i]==0){
        ans[1]=i;
        
     }
  }
  return ans;
}