/*Archana Rose Biju
S3 D 11
Selection Sort*/

#include<conio.h>
#include<stdio.h>
void main()	
{ int i,j,a[10],n,temp;
  clrscr();
  printf("Enter no of elements:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
	scanf("%d",&a[i]);
  for(i=0;i<n;i++)
	{  for(j=i+1;j<n;j++)
		{ if (a[i]>a[j])
			{  temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
			}
		}
	}
  printf("Sorted elements:");
  for(i=0;i<n;i++)
	printf("%d",a[i]);
  getch();
}


OUTPUT:

Enter no of elements:5
Enter the elements:2 5 7 6 1
Sorted elements:12567
