#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char name[80];
	int i, cnt = 0, cmt = 0;
		printf ("nhap name: ");
		scanf ("%[^\n]s", name);
	for (i = 0; i < 80; i++){
		
		switch (name[i]){
			case 'a':
			case 'A':
			case 'e': 
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				cnt +=1;
				break;
			case ' ':
				cmt +=1;
				break;
			default:
				break;
		}
		}
	printf ("so nguyen am la: %d\n",cnt);
	printf ("so phu am la: %d", strlen(name) - cnt - cmt);
	
	return 0;
}
