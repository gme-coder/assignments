#include <stdio.h>
int main()
{
	int customerid, unitsconsumed;
	char customername[50];
	float chargesperunit, totalbill , surcharge , totalamount;
	
	
	// prompt user to enter details
	printf("customer id:");
	scanf("%d", &customerid);
	
	printf("units consumed:");
	scanf("%d",&unitsconsumed);
	
	printf("customername:");
	scanf("%s", &customername);
	
	
	if(unitsconsumed<=199){chargesperunit= 1.20;}
	 else if(unitsconsumed<400)
	{ 
		chargesperunit = 1.50;
	}
	else if(unitsconsumed<600){ chargesperunit = 1.80;}
	else(chargesperunit = 2.00);
		
		//total bill
	
	totalbill = unitsconsumed * chargesperunit;
		
		// calculate surcharge
		
		if(totalbill > 400) {surcharge = totalbill*0.15;} else {surcharge = 0;}
			
			// calculate totalamount
		totalamount = totalbill + surcharge;
		
			
			// ensure the minimum bill to be paid is 100
		
		if(totalamount<100){totalamount = 100;}
			
		
		
		//print output
	printf("\n customer id: %d\n", customerid);
	printf("customer name: %s\n", customername);
	printf("units consumed: %d\n", unitsconsumed);
	printf("total amount: %.2f\n", totalamount);
	
	
	return 0;





	
}