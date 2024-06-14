// Ecrire un programme qui demande a l'utilisateur d'entrer un entier,puis le programme utilise une fonction pour compte et affiche le nombre de chiffres qui composent ce chiffre
#include <stdio.h>
int saisie(){
	int n;
	printf("Veuillez entrer un chiffre: ");
	scanf("%d",&n);
	return n;
}
void nbr_chiffres(int n){
       int i;
       int x = 0,temp = n;
       if(temp == 0){
	   x = 1;
       }
       else {
          while(temp != 0){
        temp = temp / 10;
        x++;
	}
}

        printf("le nombre de chiffres de %d est: %d\n",n,x);
}
int main(){
	int n;
	n = saisie();
	nbr_chiffres(n);
	return 0;
}
