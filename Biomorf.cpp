#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
     
    int numeroSorteado, auxiliarRetorno;
    int retorno;

    char musica[13][50];
    char auxiliar[13][50];

    strcpy(musica[0], "Black Hole Death Penalty");
    strcpy(musica[1], "Mass Consuming Nanobots");
    strcpy(musica[2], "Reality V");
    strcpy(musica[3], "Force Fed Cerebral Remains");
    strcpy(musica[4], "Wormhole Disfigurement");
    strcpy(musica[5], "Artificial Man");
    strcpy(musica[6], "Rise of the Machines");
    strcpy(musica[7], "Colliding Planets");
    strcpy(musica[8], "Natural Selection");
    
    strcpy(musica[9], "COVER Crystal Mountain (Death)");
    strcpy(musica[10], "COVER Native Blood (Testament)");
    strcpy(musica[11], "COVER Violent Revolution (Kreator)");
    strcpy(musica[12], "COVER Territory (Sepultura)");

    srand(time(NULL));
    
    printf("BIOMORF SETLIST:\n\n");
    
	
    for (int indice = 0; indice < 13; indice++) {
    	
    	retorno = 1;
    	
        numeroSorteado = rand() % 13; 
    	
    	for (int indice2 = 0; indice2 < 13; indice2++) {
    			
    		// verefica se a musica ja existe
    		auxiliarRetorno = strcmp(auxiliar[indice2], musica[numeroSorteado]);
    			
    		// caso a musica exista o retorno receberá 0 e o indice será decrementado para o vetor ficar completo
    		if (auxiliarRetorno == 0){
    				
    			retorno = 0;
    			indice--;
    
			} 
		}
			
		if 	(retorno != 0) {
					
			strcpy(auxiliar[indice],musica[numeroSorteado]);
					
		}

	} 
		
    
    for (int indice = 0; indice < 13; indice++){
    	
    	printf("%dº - %s \n",indice+1, auxiliar[indice]);
    	
	}
    	
    printf("\n");
    
    getch();
    
    system ("pause");
    return 0;
}
