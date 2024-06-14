//Ecrire un programme qui demane a l'utilisateur de saisir 10 reels stockes dans un tableau.Ecrivez les fonctions suivantes:
//Une fonction qui determine et affiche le maximum des entiers stockees
//Une fonction qui determine et affiche le minimum des entiers stockees
//Une focntion qui renvoie le tableau de meme taille ayant les valeurs de l'ordre inerse
#include <stdio.h>
int Max(int T[]){
   int i;
   int Max = T[0];
   for(i = 0;i < 10;i++){
	   if(Max < T[i]){
		   Max = T[i];
	   }
   }
   return Max;
}
int Min(int T[]){
   int i;
   int Min = T[0];
   for(i = 0;i < 10;i++){
           if(Min > T[i]){
                   Min = T[i];
           }
   }
   return Min;
}
void sens_inverse(int T[]){
	int i;
	int TS[10];
	for(i = 0;i < 10;i++){
              TS[9 - i] = T[i];
	}
	for(i = 0;i < 10;i++){
		printf("le tableau en sens inverse donne: T[%d] = %d\n",i + 1,TS[i]);
}
}
int main(){
	int T[10];
	int i;
	for(i = 0;i < 10;i++){
		printf("Veuillez entrez le %d element: ",i + 1);
		scanf("%d",&T[i]);
	}
	printf("Le maximum est %d\n",Max(T));
	printf("Le minimum est %d\n",Min(T));
        sens_inverse(T);
return 0;
}
