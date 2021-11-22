#include<stdio.h>
#include<stdlib.h>
#include<time.h>

   int main()
      {
      	int number,guess,attempt=1;
      	srand(time(0));            //time() return in second
      	 number=rand()%100+1;  //generate random number between 1 to 100
      	 
      	 printf("Guess any number between 1 to 100 \n");
      	 do{ 
		   //printf("Guess any number between 1 to 100 \n");
		   scanf("%d", &guess);
		     if(guess>number)
		         printf("Enter lower number \n");
		         else if(guess<number)
		            printf("Enter Higher number\n");
		      else
			     printf("You guessed it right at %d attempt", attempt);
				          
      	 	attempt++;
		   }while(number!=guess);
	   } 
