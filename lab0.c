/* 
Oscar Flores
CPTR 131
Spring 2015
Lab 0
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <string.h>



int drop_the_base(int x, int y)
{
	int number, base;
	number = x;
	base = y;
	if (number < base)
	{
		return number;
	}	
	else
	{
		return (number % base) + 10*drop_the_base(number / base, base);
	}
	
	
}									
									


int x_to_the_n (int x,int n)		//raises a number given to the power given
{
    int i; 							//counter
    int number = 1;					
    for (i = 0; i < n; ++i)			//loop that decides when to stop
        number *= x;				
    return number;
}

int placing(char *x)
{
	char *num = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *pos = strstr(num, x);				//compares where in the string the given digit is
	int position = (pos - num);				//gives a location in the form of a number
	return position;
}


int main(void)
{
		
	char base_of[50];
	char a[100];
	char b[1];
	char c[1];
	char d[1];
	char e[1];
	
	printf("Enter the letter or number from which you would like to convert from: ");
	scanf("%s", a);
	
	int base_to_con_to = placing(a);	//figures out what base we are converting to
	
	int doneb = x_to_the_n(base_to_con_to, 3);
	int donec = x_to_the_n(base_to_con_to, 2);
	int doned = x_to_the_n(base_to_con_to, 1);
	int donee = x_to_the_n(base_to_con_to, 0);
	
	printf("Enter the base you would like to convert to: ");
	scanf("%s", base_of);
	int base_to = placing(base_of);
	
	printf("what is the first digit: ");
	scanf("%s", b);						//finds the first digit of the four
	int first_dig = placing(b) * doneb;
	
	
	
	printf("what is the second digit: ");
	scanf("%s", c);						//second digit
	int second_dig = placing(c) * donec;
	
	
	printf("what is the third digit: ");
	scanf("%s", d);						//third
	int third_dig = placing(d) * doned;
	
	
	printf("what is the fourth digit: ");
	scanf("%s", e);						//fourth
	int fourth_dig = placing(e) * donee;
	
	int in_decimal = first_dig + second_dig + third_dig + fourth_dig;
	printf("%i\n", in_decimal);
	
	int result = drop_the_base(in_decimal, base_to);
	printf("%i", result);
	
	
	
	
	
	
	return 0;
	
}
