#include<stdio.h>
int main()
{
	int mark;
	printf("Enter a number:");
	scanf("%d",&mark);  //Hmm, whats your Number?

	if(mark > 95 && mark <=100)//Checking the grade,,,
	{
		printf("A+ Grade");
	}
	else if(mark > 90 && mark <= 95)
	{
		printf("A grade");
	}
	else if(mark > 80 && mark <= 90)
	{
		printf("B Grade");
	}
	else if(mark > 70 && mark <= 80)
	{
		printf("C Grade");
	}
	else if(mark>60&&mark<70)
	{
		printf("D Grade");
	}
	else if(mark > 49 && mark <=59)
	{
		printf("E Grade");
	}
	else if(mark >= 0 && mark<=49)
	{
		printf("Fail, Better Do Next Time..");//Oops
	}
	else
	{
		printf("Invalid Mark");
	}
}
//Thanks


