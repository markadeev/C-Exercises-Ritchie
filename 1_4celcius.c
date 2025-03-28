//Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
#include <stdio.h>
#define HIGHEST_CELCIUS 100
#define INCREMENT 10

int main(){
	float lowest = 0;
	float fahr;

	printf("celcius\tfahrenheit\n");
	while (lowest <= HIGHEST_CELCIUS){
		fahr = 9/5*lowest-32;
		printf("%6.2f\t%6.2f\n", lowest, fahr);
		lowest += INCREMENT;
	}
	return 0;
}

		

	
