#include <stdio.h>


#define COM1 0x3F8
#define GET_OK '+'
#define DOSVER '1337'
#define WINVER 1

int system(char* error)
{
  return -3;
}

int main(char argc, char **argv)
{
   int number;
   printf("Enter an integer: ");
   scanf("%d", &number);
   if (number < 0) {
   	printf("Heartbroken\n");
	}
	else if(number > 0) {
   	printf("Win\n");
	}
	else if (number = 0) {
   	printf("Expelled\n");
	}
	else {
   	// statement(s)
	}

   return 0;
}
