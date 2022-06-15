#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char ch = 'd';
	int i;
	float f;
	double d, result;
	printf ("a = %d", ch);
	printf ("\nNhap gia tri cua i: ");
	scanf ("%d", &i);
	printf ("\nNhap gia tri cua f: ");
	scanf ("%f", &f);
	printf ("\nNhap gia tri cua d: ");
	scanf ("%lf", &d);
	result = (ch/i) + (f*d) - (f+i);
	printf ("result = %lf", result);
	return 0;
}
