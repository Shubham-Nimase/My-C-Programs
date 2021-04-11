
/*Problem Statement:16.3
 Accept number of rows and number of
 columns from user and display below pattern.

Input : iRow = 5 iCol = 5
Output :a b c d e
        1 2 3 4 5
        a b c d e
        1 2 3 4 5
        a b c d e 
*/
#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	
	int i=0;
	int j=0;
	int iAlfa=97;
	int iCnt=1;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i%2==0)
			{
				printf("%d\t",iCnt);
				iCnt++;
			}
			else
			{
				printf("%c\t",iAlfa);
				iAlfa++;
			}
		}
		iAlfa=97;
		iCnt=1;
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

	