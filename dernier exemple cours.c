//Ecrire un programme qui demande a l'utilisateur de saisir 10 elements qu'on stocke dans un tableau T.Ensuitemle programme determine et affiche le minimum des elements du Tableau T
#include <stdio.h>
int main(){
	int T[10];
	int *P;
	P = T;
	for(P = T;P < T + 10;P++){
		printf("Veuillez entrez le %ld element: ",P - T);
		scanf("%d",P);	
	}
	int MIN = T[0];
	 for(P = T + 1;P < T + 10;P++){
                if(*P < MIN){
                     MIN = *P;
                }
        }

	printf("Le minimum du tableau est: %d\n",MIN);
	return 0;
}

