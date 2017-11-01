int array[2] = {0, 0};
int *twoSum(int* nums, int numsSize, int target) {
   
    for (int k = numsSize-2; k >= 0; k--) {  
        int tmp = target - nums[k];
         
        for (int i = numsSize-1; i > k; i--) {
            
            if  (tmp == nums[i]) {
                array[0] = k;
                array[1] = i;

                return &array;
            }
        }
    }

    return &array;
}