// Ecrire un programme qui demande a l'utilisateur un rayon d'une cercle,puis le programme calcule et affiche le diametre,la surface et le perimetre du cercle

#include <stdio.h>
#include <math.h>
int rayon;
void saisie(){
        printf("Veuillez entrer le rayon du cercle: ");
        scanf("%d",&rayon);
        }
float Diametre(){
        float D;
        D = rayon * 2;
        return D;
}
float Perimetre(){
        float P;
        const float Pi = 3.14;
        P = 2 * Pi * rayon;
        return P;
}
float Surface(){
        float S;
        const float Pi = 3.14;
        S = Pi * pow(rayon,2);
        return S;
}
float Affichage(){
        float D,P,S;
        D = Diametre();
        printf("Le diametre du votre cercle = %.2f\n",D);
        P = Perimetre();
        printf("Le Perimetre du votre cercle = %.2f\n",P);
        S = Surface();
        printf("La surface du votre cercle = %.2f\n",S);
        return 0;
}
int main(){
        saisie();
        Affichage();
        return 0;
}

