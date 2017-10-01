int* twoSum(int* nums, int numsSize, int target) {
    int min = 2147483647;
    
    for (int i = 0 ; i < numsSize ; i++) {
        if (nums[i] < min)      min = nums[i];
    }
    int max = target - min;
    int len = max - min + 1;
    int *map = (int*)malloc(len*sizeof(int));
    
    for(int i = 0 ; i < len ; i++) {
        map[i] = -1;
    }
    
    int *indice = (int*)malloc(2*sizeof(int));
    
    for (int i = 0 ; i < numsSize ; i++) {
        if (nums[i] - min < len) {
            if (map[target - nums[i] - min] != -1) {
                indice[0] = map[target - nums[i] - min] ;
                indice[1] = i ;
                return indice;
            }
            map[nums[i] - min] = i;
        }
    }
    free(map);
    return indice;
}