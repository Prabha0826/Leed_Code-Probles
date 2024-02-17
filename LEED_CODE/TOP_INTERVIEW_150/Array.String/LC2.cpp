#include<stdio.h>
int removeelement(int *nums, int numssize, int val)
{
	int k=0;
	for(int i=0;i<numssize;i++)
	{
		if (nums[i]!=val)
		{
			nums[k++]=nums[i];
		}
	}
	return k;
}
int main()
{
	int nums[]={0,1,2,2,3,0,4,2};
	int val=2;
	int numssize=sizeof(nums)/sizeof(nums[0]);
	int k= removeelement(nums,numssize, val);
	printf("Modified Array: ");
	for(int i=0;i<k;i++)
	{
		printf("%d",nums[i]);
	}
	printf("\nNumber of elements that not equal to val= %d",k);
	return 0;
}
