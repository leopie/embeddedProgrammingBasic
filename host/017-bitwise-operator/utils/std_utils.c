#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

void waitEnterPressToQuitApplication(void) {
	printf("Press enter key to exit the application\n");
	fflush(stdout);
	while(getchar() != '\n') {}
	getchar();
}
