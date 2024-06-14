//Ecrire un programme qui demande a l' utilisateur de saisir 10 elements stockes dans un tableau . Ecrivez trois fonctions : deux fonctions qui calcule et affiche la moyenne et le produit des elements du tableau , l'autre fonction affiche et calcule les elements negatifs et les elements postifs du tableau 

#include <stdio.h>
float T[10];
float TN[10], TP[10];
int nbr_elements;
void saisie() {
  int i;
  printf("Veuillez entrer le nombre des elements que vous voulez stocker dans "
         "le tableau: ");
  scanf("%d", &nbr_elements);
  for (i = 0; i < nbr_elements; i++) {
    printf("Veuillez entrer le nombre %d: ", i + 1);
    scanf("%f", &T[i]);
  }
}
float Moyenne() {
  float Moyenne = 0;
  int i;
  for (i = 0; i < nbr_elements; i++) {
    Moyenne = Moyenne + T[i];
  }
  Moyenne = Moyenne / nbr_elements;
  return Moyenne;
}
float produit() {
  float Produit = 1;
  int i;
  for (i = 0; i < nbr_elements; i++) {
    Produit = Produit * T[i];
  }
  return Produit;
}
void elements_signe() {
  int n_negatif = 0, n_positif = 0;
  int i;
  for (i = 0; i < nbr_elements; i++) {
    if (T[i] < 0) {
      TN[n_negatif] = T[i];
      n_negatif++;
    } else if (T[i] > 0) {
      TP[n_positif] = T[i];
      n_positif++;
    }
  }
  printf("************Les elements positifs du tableau sont: "
         "*******************\n");
  for (i = 0; i < nbr_elements; i++) {
    if (TP[i] > 0) {
      printf("%.2f\n", TP[i]);
    }
  }
  printf("************ Les elements negatif du tableau sont: "
         "*******************\n");
  for (i = 0; i < nbr_elements; i++) {
    if (TN[i] < 0) {
      printf("%.2f\n", TN[i]);
    }
  }
}
int main() {
  float M, P;
  saisie();
  elements_signe();
  M = Moyenne();
  printf("La moyenne des elements du tableau = %.2f\n", (float)M);
  P = produit();
  printf("le produit des elements du tableau = %.2f\n", (float)P);

  return 0;
}
