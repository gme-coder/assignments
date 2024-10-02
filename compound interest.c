#include <stdio.h>
#include <math.h>
int main()
{   int principalamount, time, n ;
    float rate, compoundinterest;
   


        printf("principalamount: ");
        scanf("%d\n", &principalamount);
        
        printf("time: ");
        scanf("%d\n", &time);
        
        printf("rate: ");
        scanf("%f\n", &rate);
        
        printf(" enter number of times interest applied per time period: ");
        scanf("%d\n", &n);
        
        //calculate the compound interest
        
        compoundinterest = principalamount*pow(1 + (rate/100)/n,n*time)-principalamount;
        
        //print the result 
        printf("compoundinterest = %.2f\n", compoundinterest);
        

	
	
	return 0;
}