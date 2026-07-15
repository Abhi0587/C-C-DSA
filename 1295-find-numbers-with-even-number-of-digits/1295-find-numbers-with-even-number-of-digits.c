int findNumbers(int* nums, int numsSize) {
    int count=0;

    for(int i=0;i<numsSize;i++){
        int num=nums[i];
        int digit=0;

        while(num>0){
            digit++;
            num/=10;
            
        }
        if(digit%2==0)
        count++;

    }
    return count;
    
}