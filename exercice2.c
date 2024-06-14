//Ecrire un programme en utilisant un e fonction qui affiche le cube d'un nombre reel saisie par l'utilisateur
#include <stdio.h>
#include <math.h>
int saisie(){
	int n;
	printf("Veuillez entrer un entier: ");
	scanf("%d",&n);
	return n;
}
int cube(int n){
     return pow(n,3);
}
int main(){
	int resultat;
	resultat = saisie();
	cube(resultat);
	printf("le cube de %d = %d\n",resultat,cube(resultat));
	return 0;
}
     
