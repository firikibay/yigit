#include <stdio.h>
#include <assert.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Number of elements not equal to val

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

// Optional: You can include helper functions here

// Note: No main function is needed here, as LeetCode will provide its own main during testing.
