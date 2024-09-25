#include <stdio.h>
int main()
{
	int principal, time;
	float rate, simpleinterest;
	
	printf("enter the principle amount:");
	scanf("%d", &principal);
	printf("enter the time (in years):");
	scanf("%d",&time);
	printf("enter the rate (in%%)):");
	scanf("%f", &rate);
	
	simpleinterest = (principal * time * rate)/100;
	printf("the simple interest is %.2f/n", simpleinterest);
	
	
	return 0;
}