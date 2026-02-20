#include <stdio.h>

long long g_data = 0XFFFEABCD11112345;

int main() {
	char data = 100;
	printf("The address of the char variable is %p\n",&data); //Address of
	char *pData = &data; //Address of
	char read_pData = *pData; //Value at address
	printf("The value at address %p contains the char %d (from char pointer)\n",pData,read_pData);
	*pData = 65; //write
	printf("The value at address %p contains the char %d (from char variable)\n",&data,data); //Address of

	char *pAddress1 = (char*) &g_data;
	printf("\nValue at address %p is: %x (char)\n", pAddress1, *pAddress1);
	printf("Value at address %p is: %x (char)\n", pAddress1+1, *(pAddress1+1));
	printf("Value at address %p is: %x (char)\n", pAddress1+2, *(pAddress1+2));
	printf("Value at address %p is: %x (char)\n", pAddress1+3, *(pAddress1+3));
	printf("Value at address %p is: %x (char)\n", pAddress1+4, *(pAddress1+4)); //ffffffcd because is negative ffffff..
	printf("Value at address %p is: %x (char)\n", pAddress1+5, *(pAddress1+5));
	printf("Value at address %p is: %x (char)\n", pAddress1+6, *(pAddress1+6));
	printf("Value at address %p is: %x (char)\n", pAddress1+7, *(pAddress1+7));
	printf("Next value from address %p is: %p (char)\n", pAddress1, pAddress1+1);

	short *pAddress2 = (short*) &g_data;
	printf("\nValue at address %p is: %x (short)\n", pAddress2, *pAddress2);
	printf("Value at address %p is: %x (short)\n", pAddress2+1, *(pAddress2+1));
	printf("Value at address %p is: %x (short)\n", pAddress2+2, *(pAddress2+2));
	printf("Value at address %p is: %x (short)\n", pAddress2+3, *(pAddress2+3));
	printf("Next value from address %p is: %p (short)\n", pAddress2, pAddress2+1);

	int *pAddress3 = (int*) &g_data;
	printf("\nValue at address %p is: %x (int)\n", pAddress3, *pAddress3);
	printf("Value at address %p is: %x (int)\n", pAddress3+1, *(pAddress3+1));
	printf("Next value from address %p is: %p (int)\n", pAddress3, pAddress3+1);

	long *pAddress4 = (long*) &g_data;
	printf("\nValue at address %p is: %lx (long)\n", pAddress4, *pAddress4);
	printf("Value at address %p is: %lx (long)\n", pAddress4+1, *(pAddress4+1));
	printf("Next value from address %p is: %p (long)\n", pAddress4, pAddress4+1);


	long long *pAddress5 = (long long*) &g_data;
	printf("\nValue at address %p is: %llx (long long)\n", pAddress5, *pAddress5);
	printf("Next value from address %p is: %p (long long)\n", pAddress5, pAddress5+1);

}
