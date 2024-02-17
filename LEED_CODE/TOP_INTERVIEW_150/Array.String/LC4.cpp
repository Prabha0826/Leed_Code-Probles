//Remove Duplicates from Sorted Array II
#include<stdio.h>
int uniqueElements(int *nums,int numsSize)
{
	if(numsSize<=2)
	return numsSize;
	int k=2;
	for(int i=2;i<numsSize;i++)
	{
		if(nums[i]!=nums[k-2]){
			nums[k++]=nums[i];
		}
	}
	return k;
}
int main()
{
	int nums[]={1,1};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	int k=uniqueElements(nums,numsSize);
	printf("After Modified: ");
	for(int i=0;i<k;i++)
	{
		printf("%d",nums[i]);
	}
	return 0;
}
