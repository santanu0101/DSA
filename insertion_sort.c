#include<stdio.h>
void main()
{
	int data[100],n,temp,i,j;

	printf("Enter number of items to be sorted (<100) : ");
	scanf("%d",&n);
	printf("Enter elements: ");

	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}

	for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;

    	while(temp<data[j] && j>=0)  /*To sort elements in descending order, change to temp>data[j] in this line.*/
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1]=temp;
	}

	printf("\n\nFinal ascending order: ");
	for(i=0; i<n; i++)
		printf("%d ",data[i]);
}