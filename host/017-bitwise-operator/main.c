#ifndef INT_TYPES_H
#define INT_TYPES_H
#define __USE_MINGW_ANSI_STDIO 1
#include <inttypes.h>
#endif

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDINT_H
#define STDINT_H
#include <stdint.h>
#endif

#include "./utils/std_utils.h"

void printInBinaryFormat(uint8_t, uint8_t);

int main() {
	uint8_t int1, int2;
	printf("Insert two integer value: ");
	fflush(stdout);
	scanf("%" SCNx8 " %" SCNx8, &int1, &int2);

	printf("bitwise &: %02hhx\n", int1 & int2);
	printf("bitwise |: %02hhx\n", int1 | int2);
	printf("bitwise ~: %02hhx\n", ~int1);
	printf("bitwise ^: %02hhx\n", int1 ^ int2);

	printf("%02hhx is %s\n", int1, int1 & 0x01?"odd":"even");
	printf("%02hhx is %s\n", int2, int2 & 0x01?"odd":"even");

	uint8_t int3 = 0x00;

	printf("%08hhx with 4th and 7th bit set became: ", int3);
	printInBinaryFormat(int3 | 0x90, 1); // 10010000

	uint8_t int4 = 0xFF;

	printInBinaryFormat(int4, 0);
	printf(" with 4th 5th and 6th bit cleared became: ");
	printInBinaryFormat(int4 & ~0x70, 1); // 01110000

	uint8_t int5 = 0x00;

	printInBinaryFormat(int5, 0);
	printf(" with 0th and 7th bit toggled became: ");
	printInBinaryFormat(int5 = int5 ^ 0x81, 1); // 10000001
	printInBinaryFormat(int5, 0);
	printf(" with 0th and 7th bit toggled became: ");
	printInBinaryFormat(int5 = int5 ^ 0x81, 1); // 10000001
	printInBinaryFormat(int5, 0);
	printf(" with 0th and 7th bit toggled became: ");
	printInBinaryFormat(int5 = int5 ^ 0x81, 1); // 10000001
	printInBinaryFormat(int5, 0);
	printf(" with 0th and 7th bit toggled became: ");
	printInBinaryFormat(int5 = int5 ^ 0x81, 1); // 10000001

	waitEnterPressToQuitApplication();
	return 0;
}

void printInBinaryFormat(uint8_t num, uint8_t newLine) {
	for (int i=0; i<8; i++) {
		printf("%u", (num >> (7 - i)) & 1);
	}
	if(newLine) printf("\n");
}
