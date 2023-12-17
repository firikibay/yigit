#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int candidate, count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
           
            candidate = nums[i];
            count = 1;
        } else if (candidate == nums[i]) {
           
            count++;
        } else {
            
            count--;
        }
    }

    return candidate;
}
