/* Archana Rose Biju
   S3 D 11
   Insertion Sort*/
#include<stdio.h>
void main() 
{
	int i, j, num, temp, arr[20];
	printf("Enter size of array: ");
	scanf("%d", &num);

	printf("Enter %d elements in arry: \n", num);
	for(i=0; i<num; i++)
		{
		   scanf("%d", &arr[i]);
		}

	for(i=1; i<num; i++)
		{
		   temp=arr[i];
		   j=i-1;
	while((temp<arr[j])&&(j>=0))
		{
	 	   arr[j+1]=arr[j];
		   j=j-1;
		}
	          arr[j+1]=temp;
		}

	printf("After Sorting elements: ");
	for(i=0; i<num; i++)
		{
	  	    printf("%d  ", arr[i]);
		}

}
