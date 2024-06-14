//Ecrire un programme utilisant une fonction qui determine si un nombre est premier ou non (rappel: un nombre premier si n'est divisble que par 1 et lui meme
#include <stdio.h>
 int Premier(int n){
 int i,estPremier = 1;
 for (i = 2;i < n;i++){
		if(n % i == 0){
		       estPremier = 0;
	       	       break;
		}
		else{
			estPremier = 1;
                    }
             }
 return estPremier;
        }

void verifier(int n,int estPremier){
	if(estPremier == 0){
		printf("%d est pas premier\n",n);
	}
	else if(estPremier == 1){
		printf("%d est premier\n",n);
	}
}
int saisie(){
	int n;
	printf("Entrez un entier: ");
	scanf("%d",&n);
	return n;
}
int main(){
	int n,estPremier;
	n = saisie();
	estPremier = Premier(n);
	verifier(n,estPremier);
	return 0;
}
