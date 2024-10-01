#include<stdio.h>
int main()
{
	int age , income;
	
	printf("enter your age: ");
	scanf("%d", &age);
	
	printf(" enter your annual income in kenya shillings: ");
	scanf("%d",&income);
	
	if ( age>=21  &&  income>=21000){
		printf("congratulations, you have qualify for a loan .\n");
	} else
	{
		printf(" unfortunately , we are unable to offer you a loan at this time.\n");
	}
	
	return 0;
}