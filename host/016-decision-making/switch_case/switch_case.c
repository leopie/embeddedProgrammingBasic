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

float circle_area(float radius);
float rectangle_area(float base, float height);
float triangle_area(float base, float height);
float trapezoid_area(float minorBase, float majorBase, float height);

int switch_case_main() {
	uint8_t code;
	printf("Area calculation program\n");
	printf("triangle  --> t\n");
	printf("square    --> s\n");
	printf("rectangle --> r\n");
	printf("trapezoid --> z\n");
	printf("circle    --> c\n");
	printf("\nSelect the geometric figure with appropriated code: ");
	fflush(stdout);
	if(scanf("%c", &code) == 0) {
		printf("\nError! Inserted code is an invalid character\n");
		waitEnterPressToQuitApplication();
		return -1;
	}

	switch((char)code) {
		float base, majorBase, height, radius, l;
		case 't':
			printf("\nEnter triangle base(b): ");
			fflush(stdout);
			if(scanf("%f", &base) == 0 || base < 0) {
				printf("\nError! Inserted base is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("Enter triangle height(h): ");
			fflush(stdout);
			if(scanf("%f", &height) == 0 || height < 0) {
				printf("\nError! Inserted height is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("\nArea = %f\n", triangle_area(base, height));
			break;
		case 's':
			printf("\nEnter square lato(l): ");
			fflush(stdout);
			if(scanf("%f", &l) == 0 || l < 0) {
				printf("\nError! Inserted lato is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("\nArea = %f\n", rectangle_area(l,l));
			break;
		case 'r':
			printf("\nEnter rectangle base(b): ");
			fflush(stdout);
			if(scanf("%f", &base) == 0 || base < 0) {
				printf("\nError! Inserted base is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("Enter rectangle height(h): ");
			fflush(stdout);
			if(scanf("%f", &height) == 0 || height < 0) {
				printf("\nError! Inserted height is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("\nArea = %f\n", rectangle_area(base, height));
			break;
		case 'z':
			printf("\nEnter trapezoid minorBase(mB): ");
			fflush(stdout);
			if(scanf("%f", &base) == 0 || base < 0) {
				printf("\nError! Inserted minorBase is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("Enter trapezoid majorBase(MB): ");
			fflush(stdout);
			if(scanf("%f", &majorBase) == 0 || majorBase < 0) {
				printf("\nError! Inserted majorBase is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("Enter trapezoid height(h): ");
			fflush(stdout);
			if(scanf("%f", &height) == 0 || height < 0) {
				printf("\nError! Inserted height is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("\nArea = %f\n", trapezoid_area(base, majorBase, height));
			break;
		case 'c':
			printf("\nEnter circle radius(r): ");
			fflush(stdout);
			if(scanf("%f", &radius) == 0 || radius < 0) {
				printf("\nError! Inserted radius is invalid\n");
				waitEnterPressToQuitApplication();
				return -1;
			}
			printf("\nArea = %f\n", circle_area(radius));
			break;
		default:
			printf("\nError! Wrong code selected! No figure related to code %c\n", code);
			waitEnterPressToQuitApplication();
			return -1;
	}

	waitEnterPressToQuitApplication();
	return 0;
}

float circle_area(float radius) {
	return radius * radius * 3.1415;
}

float rectangle_area(float base, float height) {
	return base * height;
}

float triangle_area(float base, float height) {
	return base * height / 2;
}

float trapezoid_area(float minorBase, float majorBase, float height) {
	return (minorBase + majorBase) * height / 2;
}
