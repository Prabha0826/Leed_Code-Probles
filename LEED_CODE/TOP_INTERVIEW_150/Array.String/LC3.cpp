//Remove Duplicates from Sorted Array
#include<stdio.h>
int removeelement(int *nums,int numsSize)
{
	if(numsSize==0)
	return 0;
	int k=1;
	for(int i=1;i<numsSize;i++)
	{
		if(nums[i]!=nums[i-1]){
		nums[k]=nums[i];
		k++;
	}
	}
	return k;
}
int main()
{
	int nums[]={1,1};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	int uniqueelement=removeelement(nums,numsSize);
	printf("Number of unique elements= %d\n",uniqueelement);
	printf("Modified Array: ");
	for(int i=0;i<uniqueelement;i++)
	{
		printf("%d",nums[i]);
	}
	return 0;
}
