
/*Problem Statement: Accept number from user and display below pattern.
Input: 8
Output: 2 4 6 8 10 12 14 16
*/
#include<stdio.h>


void Pattern(int iNo)
{
	int iDis=0;
	int iCnt=1;
	
	for(iCnt;iCnt<=iNo;iCnt++)
	{
		iDis=iCnt*2;
		printf("%d\t",iDis);
		
	
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

	