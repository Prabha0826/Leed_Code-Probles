#include<stdio.h>
void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    if (numsSize <= 1) 
        return;

    k %= numsSize;
    if (k == 0) 
        return; // If k is 0, no rotation is needed

    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}
int main()
{
	int nums[]={1,2};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	int k=3;
	printf("Original Array= ");
	for(int i=0;i<numsSize;i++)
	{
		printf("%d",nums[i]);
	}
	rotate(nums,numsSize,k);
	printf("\nAfter Rotataion= ");
	for(int i=0;i<numsSize;i++)
	{
		printf("%d",nums[i]);
	}
	return 0;
}
