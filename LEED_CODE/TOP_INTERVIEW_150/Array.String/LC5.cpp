//169. Majority Element
#include<stdio.h>
int findmajorityElement(int nums[],int n)
{
 	int majorityElement=nums[0];
	int count=1;
	// Find majority element candidate
	for(int i=1;i<n;i++)
	{
	if(nums[i]==majorityElement)
	count++;
	else
	count--;
	if(count==0)
	{
		majorityElement=nums[i];
		count=1;
	}
	}
	// Validate majority element
	count=0;
	for(int i=0;i<n;i++)
	{
		if(nums[i]==majorityElement)
		count++;
	}
	if(count>n/2)
	return majorityElement;
	else
	return -1;
}
int main()
{
	int nums[]={2,2,1,1,1,2,2};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
    int	majorityElement=findmajorityElement(nums,numsSize);
    if(majorityElement!=-1)
    printf("The majorityElement is %d",majorityElement);
    else
    printf("There is No majorityElement found");
    return 0;
}
