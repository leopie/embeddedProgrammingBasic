#include <stdio.h>

void function1(void);
void file2_function(void);

static unsigned short mainPrivateData = 100; //global variable private to this file  (only this file can access it)

int main(void) {
	char a1 = 'H';

	unsigned long long int addressOfA1 = (unsigned long long int) &a1;

	printf("Address of a1 is: %p\n", &a1);
	printf("Address of a1 is: %llx\n", addressOfA1);

	function1();
	function1();
	function1();

	//file2_function();

	printf("mainPrivateData value is: %u\n", mainPrivateData);

	return 0;
}

void function1(void) {
	static unsigned char count = 0; //global variable (lives also when method ends but) private to this function (only this function can access it)
	count+=1;
	printf("This method has been called %d times\n",count);
}

static void change_system_clock(int system_clock) { //private function
	printf("system clock changed to %d\n",system_clock);
}
