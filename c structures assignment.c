#include <stdio.h> // printf(), scsnf();
#include <string.h>//strcpy();

struct students
{
	char name[30];
	float height;
	char reg_no[50];
	char email[30];
	int phone;
} student1,student2;
int main()
{

	
	//strcpy(student1.name,"james");
	printf("enter your name:");
	scanf("%s", student1.name);
	
	//student1.height = 5.7;
	
	printf("enter height: ");
	scanf("%f",&student1.height);
	//strcpy(student1.reg_no,"CT101/G/22638/24");
	
	printf(" enter reg no:");
	scanf("%s",student1.reg_no);
	
	//strcpy(student1.email,"gichojimmy05@gmail");
	
	printf("enter your email:");
	scanf("%s",student1.email);
	
	//student1.phone = 123456;
	printf("enter your number:");
	scanf("%d",&student1.phone);
	
	
	
	/*
	printf("Name: %s\n",student1.name);
	printf("Height: %f\n",student1.height);
	printf("Reg no: %s\n",student1.reg_no);
	printf("Email: %s\n",student1.email);
	printf("Phone: %d\n", student1.phone);
	*/
	
	return 0;
}