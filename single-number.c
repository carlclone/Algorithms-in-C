int singleNumber(int* nums, int numsSize){
    int x=0;
    int i;
    for (i=0;i<numsSize;i++) {
        x=x^nums[i];
    }
    return x;
}
