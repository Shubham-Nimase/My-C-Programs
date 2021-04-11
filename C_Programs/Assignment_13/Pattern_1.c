
/*Problem Statement: Accept number from user and display below pattern.
Input: 5
Output: A	B	C	D	E
*/
#include<stdio.h>


void Pattern(int iNo)
{
	int iPrint=65;
	
	int iCnt=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%c\t",iPrint);
		iPrint++;
	
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

	