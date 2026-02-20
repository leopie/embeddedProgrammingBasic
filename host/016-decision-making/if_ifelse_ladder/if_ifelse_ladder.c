#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDINT_H
#define STDINT_H
#include <stdint.h>
#endif

#ifndef STD_UTILS_H
#define STD_UTILS_H
#include "../utils/std_utils.h"
#endif

int if_ifelse_ladder_main() {
	uint64_t income;
	double tempIncome;
	double tax;

	printf("Insert your income: ");
	fflush(stdout);
	if(scanf("%lf", &tempIncome) == 0) { //&income is a ptr to income
		printf("Error! Wrong type inserted!\n");
		waitEnterPressToQuitApplication();
		return 0;
	}

	income = (uint64_t)tempIncome; //take only integer part, but avoid scanf error if user inserted also decimal part

	if( tempIncome < 0 ) {
		printf("Error! Income cannot be minor then zero\n");
		waitEnterPressToQuitApplication();
		return 0;
	} else if( income != tempIncome ) {
		printf("Warning! Considering only integer part\n");
	}

	if(income <= 9525) {
		tax = 0;
	} else if(income <= 38700) {
		tax = income * 0.12;
	} else if(income <= 82500) {
		tax = income * 0.22;
	} else {
		tax = income * 0.32 + 1000;
	}

	printf("Calculated tax on your income of %lld Euro is: %.2lf Euro\n",income, tax);

	waitEnterPressToQuitApplication();
	return 0;
}
