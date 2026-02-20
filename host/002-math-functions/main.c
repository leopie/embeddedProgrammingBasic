#include <stdio.h>
#include "math.h"

int a=0x0FFF1111, b=0x0FFF1111;

int main() {
	printf("Addition of %X and %X is %X\n", a, b, add(a,b));
	printf("Subtraction of %X and %X is %X\n", a, b, subtract(a,b));
	printf("Multiplication of %X and %X is %llX\n", a, b, multiply(a,b));
	printf("Division of %X and %X is %f\n", a, b, divide(a,b));
}
