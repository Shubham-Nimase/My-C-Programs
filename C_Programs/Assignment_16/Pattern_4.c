
/*Problem Statement:16.4
 Accept number of rows and number of
 columns from user and display below pattern.

Input : iRow = 5 iCol = 5
Output : 1 2 3 4 5
        -1 -2 -3 -4 -5
         1 2 3 4 5
        -1 -2 -3 -4 -5
         1 2 3 4 5
*/
#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	
	int i=0;
	int j=0;
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("%d\t",-j);
				
			}
			else
			{
				printf("%d\t",j);
			}
		
		}
		printf("\n");
	}
}

int main()

{
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter number of rows and columns");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
return 0;	
}

	