/*
Oscar Flores
CPTR 131
Spring 2015
Lab 131
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char getOpcode(char *x)
{
	char *one = x;						//did it like this because I didn't realize the other way until it was too late and it was due
	if(one == "NOP"){					//plus it gives me the result I want in a simple way
		return '0';
	}
	else if (one == "LDD"){
		return '1';
	}
	else if (one == "LDI"){
		return '2';
	}
	else if (one == "STO"){
		return '3';
	}
	else if (one == "MOV"){
		return '4';
	}
	else if (one == "ADI"){
		return '5';
	}
	else if (one == "ADF"){
		return '6';
	}
	else if (one == "OR"){
		return '7';
	}
	else if (one == "AND"){
		return '8';
	}
	else if (one == "XOR"){
		return '9';
	}
	else if (one == "ROR"){
		return 'A';
	}
	else if (one == "JMP"){
		return 'B';
	}
	else if (one == "HLT"){
		return 'C';
	}
	else if (one == "LDX"){
		return 'D';
	}
	else if (one == "STX"){
		return 'E';
	}
	else return -1;
}

int main()
{
	char a[1000];
	char b[2000];
	FILE * assembly;
	FILE * listing;
	FILE * object;
	printf("What is the name of the file: ");
	scanf("%s", a);							
	assembly = fopen(a, "r");
	if(assembly == NULL){					//tutorialspoint.com
		perror("Nothing in file");			//honestly this perror thing is here becuase it looked cool when i saw it,
		return -1;							
	}
	listing = fopen("listing.lst", "w");
	object = fopen("object.obj", "w");
	while( fgets(b, 1000, assembly)!=NULL){		//this line is from stackoverflow.com
		puts(b);
		fputs(b, listing);
												//couldn't get it to work
	}
	
	return 0;
}



