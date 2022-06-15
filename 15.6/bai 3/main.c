#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
      int cardid, mapin, menu, num;
      char ch ;
      
      printf("nhap cardid \n");
      scanf("%d", &cardid);
      printf("nhap ma pin \n");
      scanf("%d", &mapin);
      if (cardid== 123 & mapin==456)
      {
	      printf("1.rut tien \n");
	      printf("2.chuyen khoan\n");
		  printf("3.xem so du\n");
		  printf("4.ket thuc\n");
		  do{
		  
		   {
			printf("moi ban nhap vao menu \n");
		    scanf("%d", &num);
		}
	
		switch(num)	{
          case 1 :
		    printf("rut tien \n");
		    break;
		  case 2 :
		    printf("chuyen khoan \n");
		    break;
		  case 3 :
		    printf("xem so du \n");
		    break;
	}
		  printf("ban co muon tiep tuc khong? Y/N ?");
		  fflush(stdin);
		  	        scanf("%c" , &ch);
		  	    
        	}while(ch!='N');
      return 0;
}}
