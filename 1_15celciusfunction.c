//Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>
#define LOWEST_CELCIUS 0
#define HIGHEST_CELCIUS 100
#define INCREMENT 10
float cel_to_fahr(float c){
	float f = c * 9 / 5 - 32;
	return f;
}
void array_printer(float c_arr[], float f_arr[]){
	printf("celcius\tfahrenheit\n");
	for (int i = 0; i < 10; ++i){
		printf("%6.0f\t%6.2f\n", c_arr[i], f_arr[i]);
	}
}
int main(){
	float celcius_array[10] = {0};
	float fahrenheit_array[10] = {0};
	float buffer = 0;

	for (int i = 0; i < 10; ++i){
		celcius_array[i] = buffer;
		buffer += INCREMENT;
	}
	for (int i = 0; i < 10; ++i){
		fahrenheit_array[i] = cel_to_fahr(celcius_array[i]);
	}
	array_printer(celcius_array, fahrenheit_array);
	return 0;
}



