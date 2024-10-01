#include <stdio.h>
int main()
{
	//get user details about book borrowed
	int BookId, DueDate, ReturnDate, daysoverdue, finerate, fineamount;
	
	printf("BookId:");
	scanf("%d\n",&BookId);
	
	printf("DueDate:");
	scanf("%d\n",&DueDate);
	
	printf("ReturnDate:");
	scanf("%d\n",&ReturnDate);
	
	
	//calculate days overdue
 
    daysoverdue = ReturnDate - DueDate;
    
    // determine fine rate and calcualte fine amount
     
    if(daysoverdue<=7) {finerate = 20;}
    	else if (daysoverdue<=14){finerate = 50;}
    		else { finerate=100;}
    			
    			 fineamount = daysoverdue * finerate;
    		
    		// print results
    		
    		printf("BookId: %d\n", BookId);
    		printf("DueDate: %d\n", DueDate);
    		printf("ReturnDate: %d\n", ReturnDate);
    		printf("daysoverdue: %d\n", daysoverdue);
    		printf("finerate: %d\n", finerate);
    		printf("fineamount: %d\n", fineamount);
    		
return 0;
}