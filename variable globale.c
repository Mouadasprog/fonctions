#include <stdio.h>
int a,b;
int min1,max1;
void mmx(){
printf("le minimum est %d\n",min1);
printf("le maximum est %d\n",max1);
}
void saisie(){
	printf("Veuillez entrez la valeur de a: ");
        scanf("%d",&a);
        printf("Veuillez entrez la valeur de b: ");
        scanf("%d",&b);
}
void signe(){
if (a * b > 0){
        printf("%d et %d sont de meme signe\n",a,b);
}
else{
        printf("%d et %d ne sont pas de meme signe\n",a,b);
}
}

int minimum(){
        int min;
        if(a > b){
                min = b;
        }

        else{
                min = a;
        }
        return min;
}
int maximum(){
          int max;
        if(a > b){
                max = a;
        }
        else{
                max = b;
        }
        return max;
}

int main(){
int min,max,i;
saisie();
signe(a,b);
min1 = minimum(a,b);
max1 = maximum(a,b);
mmx();
for(i = 1;i <=10;i++){
saisie();
signe(a,b);
min1 = minimum(a,b);
max1 = maximum(a,b);
mmx();
}
return 0;
}
