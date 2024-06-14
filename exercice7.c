//Ecrire un programme qui contient deux fonctions , une calcule le discriminant delta , et l'autre affiche les resultats
#include <stdio.h>
#include <math.h>
int saisie(int *a, int *b, int *c){
  printf("Veuillez entrer l'element a: ");
  scanf("%d",a);
  printf("Veuillez entrer l'element b: ");
  scanf("%d",b);
  printf("Veuillez entrer l'element c: ");
  scanf("%d",c);
  return 0;
  
}
float calcul(int a, int b, int c){
    float delta;
    delta = pow(b,2) - 4 * a * c;
    return delta;
}
void solution(float a, float b, float c,float delta){
  delta = calcul(a,b,c);
  float sol1,sol2,sol3;
  sol1 = (-b - sqrt(delta)) / (2 * a);
  sol2 = (-b + sqrt(delta)) / (2 * a);
  sol3 = -b / 2 * a;
  if(delta > 0){
    printf("sol1 = (%.2f - sqrt(%.2f)) / (2 * %.2f_ = %.2f\n",(float)b,delta,(float)a,sol1);
    printf("sol2 = (%.2f + sqrt(%.2f)) / (2 * %.2f) = %.2f\n",(float)b,delta,(float)a,sol2);
  }
  else if(delta == 0){
    printf("Votre equation a une solution unique , la solution est: %.2f\n",sol3);
  }
  else if (delta < 0 ){
    printf("votre equation n'a pas de solutions\n");
  }

}	
int main(){
        float delta;
        int a,b,c;
        saisie(&a,&b,&c);      
        delta = calcul(a,b,c);
        solution(a,b,c,delta);
return 0;
}


