int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *ans=(int *)malloc(numsSize*sizeof(int));
    int f[100001]={0};
    for(int i=0;i<numsSize;i++){
        f[nums[i]]++;
    }
    *returnSize=0;
    for(int i=1;i<=numsSize;i++){
        if(f[i]==0){
            ans[*returnSize]=i;
            (*returnSize)++;
        }
    }
    return ans;
}