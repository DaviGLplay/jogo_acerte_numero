#include <stdio.h>
#include <stdlib.h>
 
 
  int main(){
 	int secreto = 4; // Mude aqui o numero secreto 
 	int chute; 
	int acertou = 0;

do{

	printf("\n what number? ");
 	scanf("%i", &chute);
 	
 	if(chute == secreto){
 		printf("\n YOU_WIN ");
 		acertou = 1;
	 }else{
	 	printf("\nGAME_OVER\n\n");
	 	system("pause");
	 }
 	
}while(acertou == 0);
 	
 	
 	
 	
 	
}
 	
 	
 	

