#include <stdio.h>
#include<conio.h>

int main()
{
	int iary1[20], iary2[20];
	int i,n1,n2,j,flag,count=0;
	printf("Enter number of elements in array1:");
	scanf("%d", &n1);
		printf("Enter number of elements in array2:");
	scanf("%d", &n2);

	for(i=0;i<n1;i++)
	{
		printf("\n Enter element %d in array1:", i+1);
		scanf("%d", &iary1[i]);
	}
		for(i=0;i<n2;i++)
	{
		printf("\n Enter element %d in array2:", i+1);
		scanf("%d", &iary2[i]);
	}
	flag=0;
	for(i=0;i<n1;i++)
	{
		flag=0;
		for(j=0;j<n2;j++)
		{
		if(iary1[i]==iary2[j])
			{
		flag=1;
		count++;
		break;
			}
			
		}
		if(flag==1)
			printf("\n %d is one of the common elements of two arrays", iary1[i]);

	}
	if(count==0)
		printf("\n There are no common elements in the two arrays");
	
	
}