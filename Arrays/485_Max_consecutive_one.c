int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int c=0,m=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            c=c+1;
            if (c>m){
                m=c;
            }
        }
        else{c=0;}
    }
    return m;
}