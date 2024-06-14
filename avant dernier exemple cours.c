//Ecrire un programme qui demande a l'utilisateur de remplir un tableau de 6 elements,puis le programme calcule et affiche la somme des elements a l'aide des pointeurs
#include <stdio.h>
int main(){
	int T[6];
	int S = 0;
	int *P;
	P = T;
                for(P = T;P < T + 6;P++){
			printf("Veuillez entrer le %ld element: ",P - T);
			scanf("%d",P);
			S = S + *P;
		}
	printf("La somme des entiers des tableaux egale a: %d\n",S);
	return 0;
}
