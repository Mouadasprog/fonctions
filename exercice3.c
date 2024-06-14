//Ecrire un programme qui verifie si une annee est bisextille ou non
#include <stdio.h>
int saisie() {
    int n;
    printf("Veuillez entrer l'année: ");
    scanf("%d", &n);
    return n;
}

int estbisextille(int n) {
    if ((n % 400 == 0) ||( n % 4 == 0 && n % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}

void affichage(int n) {
    if (estbisextille(n)) {
        printf("%d est bisextille\n", n);
    } else {
        printf("%d est pas bisextille\n", n);
    }
}

int main() {
    int n,i,T[i];
    for(i = 1;i <= 10;i++){
    n = saisie();
    estbisextille(n);
    affichage(n);
    }
    return 0;
}

