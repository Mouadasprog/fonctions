//Ecrire un programme qui demande a l'utilisateur de saisir 10 reels stockes dans un tableau.Ecrivez ensuite les fonctions suivantes:
//Une fonction permettant de remplir les elements du tableau.
//Une focntion permettant de trier les elements du tableau d'un ordre croissant
//Une focntion permettant de trier les elements du tableau d'un ordre decroissant
//Une fonction permettant d'afficher les elements du tableau.
//Tester tous ses fonctions dans un programme proncipale
#include <stdio.h>
void remplissage(int T[]){
	int i;
       for(i = 0;i < 10;i++){
      printf("Veuillez entrer l'element %d: ",i + 1);
      scanf("%d",&T[i]);
       }
}
void TRicroissant(int T[]){
   int i;
   int tmp = 0,j;
   for(i = 0;i < 10;i++){
	   for(j = 0;j < 10 - i - 1;j++){
	   if(T[j] > T[j + 1]){
		   tmp = T[j];
		   T[j] = T[j + 1];
		   T[j + 1] = tmp;
	   }
	   }
   }
   printf("Le tableau en ordre croissant donne\n");
    for(i = 0;i < 10;i++){
                printf("T[%d] = %d\n",i + 1,T[i]);
        }

}
void TRidecroissant(int T[]){
   int i;
   int tmp = 0,j;
   for(i = 0;i < 10;i++){
	   for(j = 0;j < 10 - i - 1;j++){
           if(T[j] < T[j + 1]){
                   tmp = T[j];
                   T[j] = T[j + 1];
                   T[j + 1] = tmp;
           }
	   }	   

           }
   printf("Le tableau en ordre decroissant donne\n");
    for(i = 0;i < 10;i++){
                printf("T[%d] = %d\n",i + 1,T[i]);
        }

   }
void Affichage(int T[]){
	int i;
	printf("Le tableau que vous avez entre est\n");
	for(i = 0;i < 10;i++){
		printf("T[%d] = %d\n",i + 1,T[i]);
	}
}
int main(){
	int T[10];
	remplissage(T);
	Affichage(T);
	TRicroissant(T);
	TRidecroissant(T);
	return 0;
}
