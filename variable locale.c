#include <stdio.h>
void signe(int a, int b){
if (a * b > 0){
        printf("%d et %d sont de meme signe\n",a,b);
}
else{
	printf("%d et %d ne sont pas de meme signe\n",a,b);
}
}

int minimum(int a, int b){
	int min;
	if(a > b){
		min = b;
	}
	
	else{ 
		min = a;
	}
	return min;
}
int maximum(int a, int b){
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
int a,b;
int min,max;
printf("Veuillez entrez la valeur de a: ");
scanf("%d",&a);
printf("Veuillez entrez la valeur de b: ");
scanf("%d",&b);
signe(a,b);
min = minimum(a,b);
max = maximum(a,b);
printf("le minimum est %d\n",min);
printf("le maximum est %d\n",max);
return 0;
}








