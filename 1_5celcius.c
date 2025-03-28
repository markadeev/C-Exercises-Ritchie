/*Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300
degrees to 0.*/
#include <stdio.h>

int main(){
	float celcius = 300;

	printf("celcius\tfahrenheit\n");
	for (celcius; celcius >= 0; celcius -= 10.0){
		printf("%6.0f\t%6.2f\n", celcius, (celcius*9.0/5.0-32.0));
	}
	return 0;
}

