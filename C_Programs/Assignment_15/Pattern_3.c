
/*Problem Statement:15.3
 Accept number of rows and number of
 columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output : A A A A A
         B B B B B
         C C C C C
*/
#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	
	int i=0;
	int j=0;
	int iAlfa=65;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
		printf("%c\t",iAlfa);
		}
		iAlfa++;
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

	