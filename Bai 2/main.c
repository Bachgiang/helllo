#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1;
	int num2;
	
	printf("Enter two integers, and I will tell you\n");
	printf("The ralationships they satisfy: ");
	scanf("%d%d", &num1, &num2); /* read two intefers*/
	if ( num1==num2){
	printf( "%d is equal to %d\n", num1, num2);
	}
	if (num1 != num2){
		printf("%d is not equal to %d\n", num1, num2);
		}	
if (num1 < num2){
		printf("%d is less than to %d\n", num1, num2);
		}
if (num1 > num2){
		printf("%d is great than to %d\n", num1, num2);
		}
	if (num1 <= num2){
		printf("%d is less than or equal to %d\n", num1, num2);
		}
	if (num1 >= num2){
		printf("%d is great than or equal to %d\n", num1, num2);
		}
	return 0;
}
