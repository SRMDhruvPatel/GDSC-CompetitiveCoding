#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColSizes) {
    qsort(nums, numsSize, sizeof(int), compare);
    int** result = NULL;
    *returnSize = 0;

    for (int a = 0; a < numsSize - 3; a++) {
        if (a > 0 && nums[a] == nums[a - 1]) continue;

        for (int b = a + 1; b < numsSize - 2; b++) {
            if (b > a + 1 && nums[b] == nums[b - 1]) continue;

            int left = b + 1;
            int right = numsSize - 1;

            while (left < right) {
                int sum = nums[a] + nums[b] + nums[left] + nums[right];

                if (sum == target) {
                    (*returnSize)++;
                    result = (int**)realloc(result, (*returnSize) * sizeof(int*));
                    result[*returnSize - 1] = (int*)malloc(4 * sizeof(int));
                    result[*returnSize - 1][0] = nums[a];
                    result[*returnSize - 1][1] = nums[b];
                    result[*returnSize - 1][2] = nums[left];
                    result[*returnSize - 1][3] = nums[right];

                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    *returnColSizes = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < *returnSize; i++) {
        (*returnColSizes)[i] = 4;
    }

    return result;
}

int main() {
    int nums[200];
    int nums_lenght;
    printf("nums lenght is = ");
    scanf("%d", &nums_lenght);

    printf("nums \'give space between every nums\'= ");
    for(int i = 0; i<nums_lenght; i++){
    scanf("%d", &nums[i]);
    }

    int target;
    printf("target = ");
    scanf("%d", &target);

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int* returnColSizes;
    int** result = fourSum(nums, numsSize, target, &returnSize, &returnColSizes);

    for (int i = 0; i < returnSize; i++) {
        printf("[%d, %d, %d, %d]\n", result[i][0], result[i][1], result[i][2], result[i][3]);
        free(result[i]);
    }

    free(result);
    free(returnColSizes);

    return 0;
}
