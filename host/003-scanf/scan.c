/*
 * scan.c
 *
 *  Created on: 5 gen 2026
 *      Author: leona
 */
#include <stdio.h>
#include "scan.h"

static void removeSlashNFromInputBuffer();

void scanThreeNumberAndOutputAverage() {
	float a=0, b=0, c=0;
	double average=0;

	printf("Insert three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);

	average = (a + b + c) / 3.0;
	printf("\nAverage of inserted numbers is: %lf\n", average);
}

void scanSixCharAndOutputAsciiCodes() {
	char a=0, b=0, c=0, d=0, e=0, f=0;

	printf("Insert six characters: ");
	fflush(stdout);
	scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

	printf("Ascii codes of inserted chars: %c -> %u, %c -> %u, %c -> %u, %c -> %d, %c -> %d, %c -> %d", a, a, b, b, c, c, d, d, e, e, f, f);
}

void getSixCharAndOutputAsciiCodes() {
	char chars[6];

	printf("Insert 6 characters\n");
	for(int i=0; i<6; i++) {
		printf("Insert character %d: ", i+1);
		fflush(stdout);
		removeSlashNFromInputBuffer();
		chars[i] = getchar();
	}

	printf("Ascii codes of inserted chars: %c -> %u, %c -> %u, %c -> %u, %c -> %d, %c -> %d, %c -> %d", chars[1], chars[1], chars[2], chars[2], chars[3], chars[3], chars[4], chars[4], chars[5], chars[5], chars[6], chars[6]);
}

void waitEnterPressToQuitApplication() {
	printf("\nPress enter key to exit the application");
	fflush(stdout);
	removeSlashNFromInputBuffer();
	getchar();  //wait user press any key
}

static void removeSlashNFromInputBuffer() {
	while(getchar() != '\n') {
		//remove all \n from input buffer
	}
}
