int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        nums[i]*=nums[i];
    }

    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-1-i;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    return nums;
}