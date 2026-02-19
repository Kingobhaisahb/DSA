int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int majorityElement(int* nums, int numsSize) {
qsort(nums, numsSize, sizeof(int), cmp);

    int count = 1;
    int majorityCount = numsSize / 2;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i-1]) {
            count++;
            if (count > majorityCount) {
                return nums[i];
            }
        } else {
            count = 1;
        }
    }
    return nums[0];
}
