
/*Problem Statement: Accept number from user and display below pattern.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 *
*/
#include<stdio.h>


void Pattern(int iNo)
{
	int iCnt=1;
	
	for(iCnt;iCnt<=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
		
	
    }
}

int main()

{
	int iValue;
	
	printf("Enter number of elements");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
return 0;	
}

	