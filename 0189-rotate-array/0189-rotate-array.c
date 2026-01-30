void rotate(int* nums, int numsSize, int k) {

    if (numsSize <= 1)
        return;

    k = k % numsSize;

    int start, end, temp;


    start = 0;
    end = numsSize - 1;
    while (start < end) {
        temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }

 
    start = 0;
    end = k - 1;
    while (start < end) {
        temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }


    start = k;
    end = numsSize - 1;
    while (start < end) {
        temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}
