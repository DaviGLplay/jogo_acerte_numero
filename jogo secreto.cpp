#include <stdio.h>
#include <stdlib.h>


int main(){
	
            int secret = 15;	
            int select;
            int win = 0;
			int vida = 3 ;
			do{
				printf("\n you life[%c]:%i \n what number? ",3, vida );
				scanf("%i" , &select);
				
				if(select == secret ){
					printf("\n GAME_CONCLUDE");
					win = 1;
					
				}else{
					printf("\n GAME_OVER \n\n");
					vida --;
					system("pause");
						
				}
				
			}while(win == 0 && vida > 0);	
	
}
	
