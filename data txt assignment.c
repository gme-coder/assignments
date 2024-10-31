#include <stdio.h>
#include <stdlib.h>


void writetoafile(const char *filename)
{
	FILE*fptr;
	// int* number;
	char sentence[100];
	// char letter = 'MY Letters';
	

	//prompting user to enter a sentence of 100 characters
	printf("enter a sentence(of 100 characters only)");
	fgets(sentence, 100, stdin);
	fptr = fopen(filename,"w");		
	if (fptr == NULL){
		perror("Error opening file");
		exit(0);
	}
	
	fprintf(fptr,"%s",sentence);
	fclose(fptr);
}	
	
void readfile(const char *filename){
	FILE*fptr;
	char c;
	
	fptr = fopen(filename,"r");
	if (fptr == NULL){
		perror("Error opening file");
		exit(0);
	}
	
	printf("Contents of %s:\n",filename);
	while((c = fgetc(fptr)) != EOF){
		putchar(c);
	}
	fclose(fptr);

}

void appendtoafile(const char *filename){
	FILE*fptr;
	char sentence[100];	
	
	printf("enter sentence to append:");
	fgets(sentence,100,stdin);
	
	fptr = fopen(filename,"a");
	if (fptr == NULL){
		
		perror("error opening file");
		exit(0);
	}
	fprintf(fptr,"%s",sentence);
	fclose(fptr);
	
	}
	
int main(int argc, char** argv)
{
	writetoafile("data.txt");
	readfile("data.txt");
	appendtoafile("data.txt");
	readfile("data.txt");
	return 0;
}

	
	
	
	
	
	

