	/*  Archana Rose Biju
	    S3 D 11
	    Sequential search*/


	#include<stdio.h>
	#include<conio.h>
	void main()
	{  int i,s,n,a[10],c=0;
	   clrscr();
	   printf("Enter limit:");
	   scanf("%d",&n);
	   printf("Enter elements:");
	   for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	   printf("Enter element to be found:");
	   scanf("%d",&s);
	   for(i=0;i<n;i++)
		{ if(a[i]==s)
			{ c=1;
			  break;
			}
		}
	   if(c>0)
		    printf("Element found at pos:%d",i+1);
	   else
		    printf("Not found");
	   getch();


	 OUTPUT:

	 Enter limit:3
	Enter elements:3
	6
	2
	Enter element to be found:6
	Element found at pos:2
