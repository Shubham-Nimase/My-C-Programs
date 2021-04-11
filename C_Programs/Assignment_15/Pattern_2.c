
/*Problem Statement:15.2
 Accept number of rows and number of
 columns from user and display below pattern.

Input: iRow = 4 iCol = 4
Output: A B C D
        a b c d
        A B C D
        a b c d
*/
#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	
	int i=0;
	int j=0;
	int iCapital=65;
	int iSmall=97;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("%c\t",iSmall);
				iSmall++;
			}
			else
			{
				printf("%c\t",iCapital);
				
				iCapital++;
			}
		}
			
			iSmall=97;
			iCapital=65;
		
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

	